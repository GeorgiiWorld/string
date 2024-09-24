#include "sprintf.h"

#define PROC_TYPE_INT(out_type, input_type, va_input, specforma, argstr, \
                      notation)                                          \
  {                                                                      \
    out_type num = va_arg(va_input, input_type);                         \
    if (specforma->dot == true) specforma->zero = false;                 \
    int shift = proc_plus_space(argstr, specforma, num);                 \
    my_itoa((shift == true) ? argstr + 1 : argstr, num, notation,        \
            specforma->sharp);                                           \
    if (my_strlen(argstr) <= (my_size_t)specforma->precision)            \
      specforma->prec_zero = true;                                       \
  }

#define PROC_TYPE_FLOAT(out_type, input_type, va_input, specforma, argstr)   \
  {                                                                          \
    out_type num = va_arg(va_input, input_type);                             \
    int shift = proc_plus_space(argstr, specforma, (num >= 0) ? 1 : -1);     \
    int expa = 0;                                                            \
    char tarr[124] = {0};                                                    \
    if (specforma->gSpec == true) {                                          \
      int width_num = 0;                                                     \
      PROC_EXP2(num, width_num);                                             \
      proc_flag_g(width_num, specforma);                                     \
    }                                                                        \
    if (specforma->eSpec == true) {                                          \
      PROC_EXP(num, expa);                                                   \
    }                                                                        \
    my_ftoa((shift == true) ? argstr + 1 : argstr, num,                      \
            (specforma->dot || specforma->gSpec) ? specforma->precision : 6, \
            specforma);                                                      \
    if (specforma->eSpec == true && (!isnan(num) && !isinf(num))) {          \
      my_sprintf(tarr, "e%c%02d", (expa >= 0) ? '+' : '-',                   \
                 (expa < 0) ? -expa : expa);                                 \
      my_strcat(argstr, tarr);                                               \
    }                                                                        \
  }

#define PROC_EXP(num, expa)       \
  {                               \
    bool sign = false;            \
    if (num < 0) {                \
      sign = true;                \
      num = -num;                 \
    }                             \
    while (num < 1 && num > 0) {  \
      num *= 10;                  \
      expa--;                     \
    }                             \
    while (num > 9) {             \
      num /= 10;                  \
      expa++;                     \
    }                             \
    if (sign == true) num = -num; \
  }

#define PROC_EXP2(num, expa)       \
  {                                \
    long double tnum = num;        \
    if (tnum < 0) tnum = -tnum;    \
    while (tnum < 1 && tnum > 0) { \
      tnum *= 10;                  \
      expa--;                      \
    }                              \
    while (tnum > 9) {             \
      tnum /= 10;                  \
      expa++;                      \
    }                              \
  }

int my_sprintf(char* str, const char* format, ...) {
  char* pstr = str;
  char* pformat = (char*)format;
  va_list(input);
  va_start(input, format);

  while (*pformat) {
    if (*pformat == '%') {
      specformat specforma = {false};
      pformat = read_format(pformat, &specforma);  // выясняется формат вывода
      char* argstr =
          (char*)calloc(specforma.width + specforma.precision + 2050,
                        sizeof(char));  // память под строку аргумента
      if (argstr != MY_NULL) {
        proc_stars(&specforma, input);  // обработка звёздочек
        read_and_proc_spec(str, argstr, pformat, &specforma,
                           input);  // чтение спецификатора + обработка
        if (specforma.procent == true) *argstr = *pformat;  //  запись процента
        if (specforma.nSpec == false) {
          if (specforma.prec_zero == true || specforma.sSpec == true)
            write_precision(
                argstr, &specforma);  // дополнение нулями до нужной точности
          write_width(
              argstr,
              &specforma);  // дополнение пробелами или нулями до нужной ширины
        }
        pstr = write(pstr, argstr);  // запись в финальную строку
        free(argstr);  // очистка памяти после записи аргумента
        argstr = MY_NULL;
      }
    } else {
      *pstr = *pformat;
    }
    pformat++;
    pstr++;
    *(pstr) = '\0';
  }
  va_end(input);
  return my_strlen(str);
}

// здесь выясняется есть ли формат вывода у самого спецификатора
// %[флаги][ширина][точность][модификаторы][тип преобразования]
static char* read_format(const char* format, specformat* specforma) {
  char* tpformat = (char*)format;
  char* pformat = (char*)format + 1;
  int flag = read_flags(pformat, specforma);
  int strwidth = read_width(pformat + flag, specforma);
  int strprec = read_precision(pformat + flag + strwidth, specforma);
  int strlength = read_length(pformat + flag + strwidth + strprec, specforma);
  pformat +=
      flag + strwidth + strprec +
      strlength;  // сдвиги для позиции спецификатора т.е здесь спецификатор
  if (*tpformat == '%' && *(pformat) == '%') specforma->procent = true;
#ifdef __linux__
  if (specforma->procent == true) specforma->width = 0;
#endif
  return (char*)pformat;  // новая позиция для поиска формата
}

static int read_flags(const char* format, specformat* specforma) {
  int flag = my_strspn(format, "-+ #0");
  int count = flag;
  while (count--) {
    switch (*format++) {
      case '-':
        specforma->minus = true;
        break;
      case '+':
        specforma->plus = true;
        break;
      case ' ':
        specforma->space = true;
        break;
      case '#':
        specforma->sharp = true;
        break;
      case '0':
        specforma->zero = true;
        break;
      default:
        break;
    }
  }
  return flag;
}

static int read_width(const char* format, specformat* specforma) {
  my_size_t strwidth = my_strspn(format, "1234567890");
  if (strwidth >= 1) {
    char width[256] = {0};
    my_strncpy(width, format, strwidth);
    if (specforma->dot == false) {
      specforma->width = atoi(width);
    } else {
      specforma->precision = atoi(width);
    }
  } else if (*format == '*' && specforma->dot == false) {
    specforma->starwidth = true;
  } else if (*format == '*' && specforma->dot == true) {
    specforma->starprec = true;
  }
  return ((specforma->starwidth || specforma->starprec) == true) ? 1 : strwidth;
}

static int read_precision(const char* format, specformat* specforma) {
  my_size_t strwidth = 0;
  int dot_count = my_strspn(format, ".");
  if (dot_count > 0) {
    specforma->dot = true;
    strwidth = read_width(format + dot_count, specforma);
  }
  return strwidth + ((specforma->dot == true) ? dot_count : 0);
}

static int read_length(const char* format, specformat* specforma) {
  int length = 0;
  if (my_strspn(format, "hlL") == 1) {
    switch (*format) {
      case 'h':
        specforma->hLength = true;
        break;
      case 'l':
        specforma->lLength = true;
        break;
      case 'L':
        specforma->LLength = true;
        break;
      default:
        break;
    }
    length = 1;
  }
  return length;
}

// подаётся пустая строка, в неё записывается частично отформатированный
// аргумент
static void read_and_proc_spec(const char* str, char* argstr,
                               const char* format, specformat* specforma,
                               va_list input) {
  switch (*format) {
    case 'c':;
      char symb = va_arg(input, int);
      *argstr = symb;
#ifdef __linux__
      specforma->zero = false;
#endif
      if (specforma->minus) specforma->zero = false;
      break;
    case 'd':;
    case 'i':;
      proc_int(argstr, specforma, input, 10);
      break;
    case 'u':;
      specforma->space = false;
      specforma->plus = false;
      proc_uint(argstr, specforma, input);
      break;
    case 'f':;
      proc_float(argstr, specforma, input);
      break;
    case 's':;
      specforma->sSpec = true;
#ifdef __linux__
      specforma->zero = false;
#endif
      char* parg = va_arg(input, char*);
      if (parg != MY_NULL)
        my_strcpy(argstr, parg);
      else
        my_strcpy(argstr, "(null)");
      break;
    case 'g':;
      specforma->gSpec = true;
      proc_float(argstr, specforma, input);
      break;
    case 'G':;
      specforma->gSpec = true;
      proc_float(argstr, specforma, input);
      to_upper(argstr);
      break;
    case 'e':;
      specforma->eSpec = true;
      proc_float(argstr, specforma, input);
      break;
    case 'E':;
      specforma->eSpec = true;
      proc_float(argstr, specforma, input);
      to_upper(argstr);
      break;
    case 'x':;
      specforma->plus = false;
      specforma->space = false;
      proc_int(argstr, specforma, input, 16);
      break;
    case 'X':;
      specforma->plus = false;
      specforma->space = false;
      proc_int(argstr, specforma, input, 16);
      to_upper(argstr);
      break;
    case 'o':;
      specforma->plus = false;
      specforma->space = false;
      proc_int(argstr, specforma, input, 8);
      break;
    case 'n':;
      specforma->nSpec = true;
      int* len = va_arg(input, int*);
      if (len != MY_NULL) *len = my_strlen(str);
      break;
    case 'p':;
#ifdef __linux__
      my_size_t path = (my_size_t)va_arg(input, int*);
      if (path == 0) {
        my_strcat(argstr, "(nil)");
      } else {
        int shift = proc_plus_space(argstr, specforma, 1);
        my_itoa(argstr + shift, path, 16, true);
        write_precision(argstr + shift + 2, specforma);
      }
#endif
#if defined(__APPLE__) || defined(__MACH__)
      my_size_t path = (my_size_t)va_arg(input, int*);
      if (path == 0) {
        my_strcat(argstr, "0x0");
        write_precision(argstr + 2, specforma);
      } else {
        my_itoa(argstr, path, 16, true);
      }
#endif
      break;
    default:
      break;
  }
}

// обработка флагов плюс и пробел
static int proc_plus_space(char* argstr, specformat* specforma, long num) {
  bool shift = false;
  if ((specforma->plus == true) && num >= 0) {
    my_strcat(argstr, "+");
    shift = true;
  } else if ((specforma->space == true) && num >= 0) {
    my_strcat(argstr, " ");
    shift = true;
  }
  return shift;
}

// обработка звёздочек
static void proc_stars(specformat* specforma, va_list input) {
  if (specforma->starwidth == true) {
    specforma->width = va_arg(input, int);
  }
  if (specforma->starprec == true) {
    specforma->precision = va_arg(input, int);
  }
}

// обработка int
static void proc_int(char* argstr, specformat* specforma, va_list input,
                     int notation) {
  if (specforma->hLength == true) {
    PROC_TYPE_INT(short, int, input, specforma, argstr, notation);
  } else if (specforma->lLength == true) {
    PROC_TYPE_INT(long, long, input, specforma, argstr, notation);
  } else {
    PROC_TYPE_INT(int, int, input, specforma, argstr, notation);
  }
}

// обработка unsigned int
static void proc_uint(char* argstr, specformat* specforma, va_list input) {
  if (specforma->hLength == true) {
    PROC_TYPE_INT(unsigned short, unsigned, input, specforma, argstr, 10);
  } else if (specforma->lLength == true) {
    PROC_TYPE_INT(unsigned long, unsigned long, input, specforma, argstr, 10);
  } else {
    PROC_TYPE_INT(unsigned, unsigned, input, specforma, argstr, 10);
  }
}

// обработка float and double
static void proc_float(char* argstr, specformat* specforma, va_list input) {
  if (specforma->LLength == true) {
    PROC_TYPE_FLOAT(long double, long double, input, specforma, argstr);
  } else {
    PROC_TYPE_FLOAT(double, double, input, specforma, argstr);
  }
}

// обработка g
static void proc_flag_g(int width_num, specformat* specforma) {
  int tprec = (specforma->precision > 0) ? specforma->precision : 6;
  if (width_num >= tprec || width_num <= -tprec) {
    specforma->eSpec = true;
    specforma->precision -= (specforma->precision > 0) ? 1 : -5;
  } else {
    if (width_num >= 0)
      specforma->precision =
          ((specforma->precision > 0) ? specforma->precision - 1 : 5) -
          width_num;
    if (width_num < 0)
      specforma->precision =
          ((specforma->precision > 0) ? specforma->precision - 3 : 3) -
          width_num;
  }
}

// вставка недостающих нулей для точности
static char* write_precision(char* argstr, specformat* specforma) {
  if ((*argstr == '-' || *argstr == '+' || *argstr == ' ') &&
      specforma->sSpec == false)
    argstr += 1;
  int precision_value = my_strlen(argstr);
  if (precision_value < specforma->precision && specforma->sSpec == false) {
    char* targstr = (char*)calloc(specforma->precision + 1, sizeof(char));
    if (targstr != MY_NULL) {
      char* ptargstr = targstr;
      specforma->precision -= precision_value;
      while (specforma->precision--) {
        *ptargstr++ = '0';
        *ptargstr = '\0';
      }
      my_strcat(targstr, argstr);
      my_strcpy(argstr, targstr);
      free(targstr);
      targstr = MY_NULL;
    }
  } else if (specforma->sSpec == true &&
             (precision_value > specforma->precision &&
              specforma->dot == true)) {
    *(argstr + specforma->precision) = '\0';
  }
  return (char*)argstr;
}

// вставка недостающих символов пробелами или нулями
static char* write_width(char* argstr, specformat* specforma) {
  int width_value = my_strlen(argstr);
  if (width_value < specforma->width) {
    char* targstr = (char*)calloc(specforma->width + 1, sizeof(char));
    if (targstr != MY_NULL) {
      char* ptargstr = targstr;
      specforma->width -= width_value;
      while (specforma->width--) {
        if (specforma->zero || specforma->prec_zero) {
          *ptargstr++ = '0';
        } else {
          *ptargstr++ = ' ';
        }
        *ptargstr = '\0';
      }
      if ((*argstr == '-' || *argstr == '+' || *argstr == ' ') &&
          specforma->zero)
        argstr += 1;
      if ((*argstr == '0' && *(argstr + 1) == 'x') && specforma->zero)
        argstr += 2;
      if (specforma->minus == true && specforma->prec_zero == false) {
        my_strcat(argstr, targstr);
      } else {
        my_strcat(targstr, argstr);
        my_strcpy(argstr, targstr);
      }
      free(targstr);
      targstr = MY_NULL;
    }
  }
  return (char*)argstr;
}

// вставка отформатированного аргумента в строку
static char* write(char* str, char* argstr) {
  while (*argstr != '\0') {
    *(char*)str++ = *argstr++;
  }
  return (char*)str - 1;  // новая позиция для записи в финальную строку
}

// запись вещественного числа в строку
static void my_ftoa(char* argstr, long double num, my_size_t accuracy,
                    specformat* specforma) {
  char* pstr = argstr;
  unsigned long long units;  // левая часть
  unsigned long long decimals;  // правая часть т.е после точки
  bool sign = false;
  if (isnan(num))
    my_strcat(argstr, "nan");
  else if (isinf(num))
    (num > 0) ? my_strcat(argstr, "inf") : my_strcat(argstr, "-inf");
  else {
    if (num < 0) {
      sign = true;
      num *= -1;
    }
    // only positive numbers
    if (accuracy > 18) accuracy = 18;
    decimals = (unsigned long long)(roundl(num * pow(10, accuracy))) %
               (unsigned long long)pow(10, accuracy);
    units = (unsigned long long)num;
    bool prec = false;
    for (unsigned long long i = 1; accuracy >= i; i++) {
      if ((decimals % 10 == 0 && prec == false) &&
          (specforma->gSpec == true && specforma->sharp == false)) {
        decimals /= 10;
        continue;
      }
      *pstr++ = (decimals % 10) + '0';
      decimals /= 10;
      prec = true;
    }
    if ((accuracy > 0 && prec == true) ||
        (specforma->sharp == true && specforma->gSpec == false))
      *pstr++ = '.';
    // цикл записи левой части в строку
    bool first_zero = true;
    while (units > 0) {
      *pstr++ = (units % 10) + '0';
      units /= 10;
      first_zero = false;
    }
    if (units == 0 && first_zero == true) *pstr++ = '0';
    if (sign == true) *pstr++ = '-';  // минус для отрицательных
    *pstr = '\0';
    my_reverse(argstr);
  }
}

// конвертируем num в символы. запись в str. типы: 8ми 10ти 16ти
static void my_itoa(char* str, long long int num, my_size_t type, bool sharp) {
  my_size_t i = 0;
  bool sign = false;
  bool save = (num != 0) ? true : false;
  bool falg = false;
  if (num < 0) {
    num = -num;
    sign = true;
  }
  if (type == 8) {
    num = int_to_oct(num);
    type = 10;
    falg = true;
  }
  do {
    my_size_t symb;
    symb = num % type;
    if (type == 16) symb += (symb < 10) ? '0' : 87;
    if (type == 10) symb += '0';
    str[i++] = symb;
  } while ((num /= type) > 0);

  if ((falg == true && save == true) && sharp == true) {
    str[i++] = '0';
  } else if ((type == 16 && save == true) && sharp == true) {
    str[i++] = 'x';
    str[i++] = '0';
  }
  if (sign == true) {
    str[i++] = '-';
  }
  str[i] = '\0';
  my_reverse(str);
}

// положительное число из 10ти в 8ми ричную систему
static my_size_t int_to_oct(my_size_t num) {
  my_size_t res = 0;
  int i = 0;
  while (num > 0) {
    res += (num % 8) * pow(10, i++);
    num /= 8;
  }
  return res;
}

static void to_upper(char* str) {
  for (my_size_t i = 0; i < my_strlen(str); i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = str[i] - 32;
    }
  }
}
