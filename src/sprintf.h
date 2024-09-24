#ifndef SRC_MY_SPRINTF_H_
#define SRC_MY_SPRINTF_H_

#include <math.h>
#include <stdarg.h>
#include <stdbool.h>

#include "my_string.h"

typedef struct {
  bool minus, plus, space, sharp, zero;
  int width, precision;
  bool dot, starwidth, starprec;
  bool hLength, lLength, LLength;
  bool procent, eSpec, gSpec, sSpec, nSpec, prec_zero;
} specformat;

static char* read_format(const char* format, specformat* specforma);
static int read_flags(const char* format, specformat* specforma);
static int read_width(const char* format, specformat* specforma);
static int read_precision(const char* format, specformat* specforma);
static int read_length(const char* format, specformat* specforma);
static void read_and_proc_spec(const char* str, char* argstr,
                               const char* format, specformat* specforma,
                               va_list input);
static char* write(char* str, char* argstr);
static char* write_width(char* argstr, specformat* specforma);
static char* write_precision(char* argstr, specformat* specforma);
static void proc_stars(specformat* specforma, va_list input);
static int proc_plus_space(char* argstr, specformat* specforma, long num);
static void proc_int(char* argstr, specformat* specforma, va_list input,
                     int notation);
static void proc_uint(char* argstr, specformat* specforma, va_list input);
static void proc_float(char* argstr, specformat* specforma, va_list input);
static void proc_flag_g(int width_num, specformat* specforma);
static void my_ftoa(char* argstr, long double num, my_size_t accuracy,
                    specformat* specforma);
static void my_itoa(char* str, long long int num, my_size_t type, bool sharp);
static my_size_t int_to_oct(my_size_t num);
static void to_upper(char* str);

#endif  // SRC_MY_SPRINTF_H_
