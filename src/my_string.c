#include "my_string.h"

// возвращает указатель на первое вхождение символа
void *my_memchr(const void *str, int c, my_size_t n) {
  const unsigned char *src = (const unsigned char *)str;
  unsigned char ch = c;
  int flag = 0;
  if (str != MY_NULL) {
    while (n-- > 0) {
      if (*src == ch) {
        flag = 1;
        break;
      }
      src++;
    }
  }
  return (flag == 1) ? (void *)src : MY_NULL;
}

// совпадает столько то бит строки
int my_memcmp(const void *str1, const void *str2, my_size_t n) {
  register const unsigned char *src1 = str1;
  register const unsigned char *src2 = str2;
  int res = 0;
  while (n-- > 0) {
    if (*src1++ != *src2++) {
      res = *--src1 - *--src2;
    }
  }
  return res;
}

// возвращает указатель на массив, куда копирует строку
void *my_memcpy(void *dest, const void *src, my_size_t n) {
  const unsigned char *tsrc = (const unsigned char *)src;
  unsigned char *tdest = (unsigned char *)dest;
  while (n-- > 0) {
    *tdest = *tsrc;
    tdest++;
    tsrc++;
  }
  return (void *)dest;
}

// то же самое, но можно подать ту же строку
void *my_memmove(void *dest, const void *src, my_size_t n) {
  const unsigned char *tsrc = (const unsigned char *)src;
  unsigned char *tdest = (unsigned char *)dest;
  if (dest != MY_NULL) {
    unsigned char temp[n + 1];
    unsigned char *ptemp = MY_NULL;
    ptemp = my_memcpy(temp, tsrc, n);
    while (n-- > 0) {
      *tdest = *ptemp;
      ptemp++;
      tdest++;
    }
  }
  return (void *)dest;
}

// заменить столько то бит строки на данный символ
void *my_memset(void *str, int c, my_size_t n) {
  unsigned char *src = (unsigned char *)str;
  unsigned char ch = c;
  while (n-- > 0) {
    *src = ch;
    src++;
  }
  return (void *)str;
}

// склеить строки, \0 вновь последним
char *my_strcat(char *dest, const char *src) {
  char *save = dest;
  for (; *dest; ++dest)
    ;
  while ((*dest++ = *src++) != '\0')
    ;
  return save;
}

// то же склейка, но указывается предел, сколько символом может добавить
char *my_strncat(char *dest, const char *src, my_size_t n) {
  char *save = dest;
  for (; *dest; ++dest)
    ;
  for (; *src != '\0' && n >= 1; (*dest++ = *src++), --n)
    ;
  return save;
}

// поиск символа в строке. Возврат его позиции или NULL
char *my_strchr(const char *str, int c) {
  unsigned char ch = c;
  if (c == 0) {
    for (;; str++) {
      if (*str == ch) {
        break;
      }
    }
  } else {
    for (; *str != '\0'; str++) {
      if (*str == ch) break;
    }
  }
  return (*str == '\0' && c != 0) ? MY_NULL : (char *)str;
}

// сравнение двух строк
int my_strcmp(const char *str1, const char *str2) {
  int res = 0;
  for (; *str1 != '\0' || *str2 != '\0'; str1++, str2++) {
    if (*str1 != *str2) {
      res = *str1 - *str2;
      break;
    }
  }
  return res;
}

// то же сравнение, но указывается сколько символов нужно сравнить
int my_strncmp(const char *str1, const char *str2, my_size_t n) {
  int res = 0;
  for (; (*str1 != '\0' || *str2 != '\0') && n != 0; str1++, str2++, n--) {
    if (*str1 != *str2) {
      res = *str1 - *str2;
      break;
    }
  }
  return res;
}

//  строка2 содержит символы для поиска. Возвращается их позиция при первом
// вхождении в строке1
char *my_strpbrk(const char *str1, const char *str2) {
  for (; *str1 != '\0'; str1++) {
    for (my_size_t j = 0; j < my_strlen(str2); j++) {
      if (*str1 == str2[j]) {
        return (char *)str1;
      }
    }
  }
  return MY_NULL;
}

// поиск символа, но начиная с конца. Возврат позиции
char *my_strrchr(const char *str, int c) {
  unsigned char ch = c;
  long long nMax = my_strlen(str);
  for (str += nMax; nMax >= 0; nMax--, str--) {
    if (*str == ch) break;
  }
  return (nMax < 0) ? MY_NULL : (char *)str;
}

// такие символы попадаются подряд? начиная с первого. Длина совпадения
my_size_t my_strspn(const char *str1, const char *str2) {
  const char *p;
  for (p = str1; *p != '\0'; ++p) {
    if (!my_strchr(str2, *p)) break;
  }
  return p - str1;
}

// ищет полное вхождение подстроки needly. Возвращает указатель на начало
char *my_strstr(const char *haystack, const char *needle) {
  unsigned int len = my_strlen(needle);
  for (; *haystack != '\0'; haystack++) {
    if (my_strncmp(haystack, needle, len) == 0) return (char *)haystack;
  }
  return MY_NULL;
}

// делит строку. символ делителя заменяет на \0
char *my_strtok(char *str, const char *delim) {
  static char *save_str = MY_NULL;
  if (str) save_str = str;
  if (save_str) {
    str = save_str + my_strspn(save_str, delim);
    save_str = str + my_strcspn(str, delim);
    if (*save_str != '\0') {
      *save_str = '\0';
      ++save_str;
    }
  }
  return *str != '\0' ? str : MY_NULL;
}

// длина строчки
my_size_t my_strlen(const char *str) {
  size_t len = 0;
  while (str[len]) {
    len++;
  }
  return len;
}

// вычисляет длину начального сегмента str1,
// который полностью состоит из символов, не входящих в str2
my_size_t my_strcspn(const char *str1, const char *str2) {
  my_size_t i = 0;
  int cntf = 1;
  while (str1[i] && cntf) {
    my_size_t j = 0;
    while (str2[j] && cntf) {
      if (str1[i] != str2[j]) {
        j++;
      } else {
        cntf = 0;
      }
    }
    if (!str2[j]) i++;
  }
  return i;
}

// копирует до n символов из строки, на которую указывает src, в dest
char *my_strncpy(char *dest, const char *src, my_size_t n) {
  my_size_t i = 0;
  while (i < n) {
    dest[i] = src[i];
    i++;
  }
  return dest;
}

// копирует строку, на которую указывает src, в dest
char *my_strcpy(char *dest, const char *src) {
  my_size_t i = 0;
  for (; src[i]; dest[i] = src[i], i++)
    ;
  dest[i] = '\0';
  return dest;
}

// поиск во внутреннем массиве номера ошибки errnum
// и возвращает указатель на строку с сообщением об ошибке
char *my_strerror(int errnum) {
  static char sp[100] = {0};
  char *s = sp;
  ERROR;
  int size = 107;
#if defined(__linux__)
  size = 134;
#endif
  if (errnum > -1 && errnum < size) {
    my_strcpy(s, error[errnum]);
  } else {
#if defined(__APPLE__) || defined(__MACH__)
    my_strcpy(s, "Unknown error: ");
#endif
#if defined(__linux__)
    my_strcpy(s, "Unknown error ");
#endif
    char strnum[24];
    my_itoa_(strnum, errnum);
    my_strcat(s, strnum);
  }
  return s;
}

void my_itoa_(char *str, int num) {
  my_size_t i = 0, sign = 0;
  if (num < 0) {
    num = -num;
    sign = 1;
  }
  do {
    str[i++] = num % 10 + '0';
  } while ((num /= 10) > 0);
  if (sign == 1) {
    str[i++] = '-';
  }
  str[i] = '\0';
  my_reverse(str);
}

// переворачиваем строку str на месте
void my_reverse(char *str) {
  for (long long i = 0, len = my_strlen(str) - 1; i < len; i++, len--) {
    char ch = str[i];
    str[i] = str[len];
    str[len] = ch;
  }
}
