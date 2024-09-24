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

char* read_format(const char* format, specformat* specforma);
int read_flags(const char* format, specformat* specforma);
int read_width(const char* format, specformat* specforma);
int read_precision(const char* format, specformat* specforma);
int read_length(const char* format, specformat* specforma);
void read_and_proc_spec(const char* str, char* argstr, const char* format,
                        specformat* specforma, va_list input);
char* write(char* str, char* argstr);
char* write_width(char* argstr, specformat* specforma);
char* write_precision(char* argstr, specformat* specforma);
void proc_stars(specformat* specforma, va_list input);
int proc_plus_space(char* argstr, specformat* specforma, long num);
void proc_int(char* argstr, specformat* specforma, va_list input, int notation);
void proc_uint(char* argstr, specformat* specforma, va_list input);
void proc_float(char* argstr, specformat* specforma, va_list input);
void proc_flag_g(int width_num, specformat* specforma);
void my_ftoa(char* argstr, long double num, my_size_t accuracy,
             specformat* specforma);
void my_itoa(char* str, long long int num, my_size_t type, bool sharp);
my_size_t int_to_oct(my_size_t num);
void to_upper(char* str);

#endif  // SRC_MY_SPRINTF_H_
