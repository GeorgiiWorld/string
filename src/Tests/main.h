#ifndef SRC_TESTS_MAIN_H_
#define SRC_TESTS_MAIN_H_

#include <check.h>
#include <stdlib.h>
#include <string.h>

#include "../my_string.h"
#include "../sprintf.h"

Suite *test_string(void);
Suite *test_c_sharp(void);

Suite *test_sprintf_c(void);
Suite *test_sprintf_d(void);
Suite *test_sprintf_i(void);
Suite *test_sprintf_e(void);
Suite *test_sprintf_E(void);
Suite *test_sprintf_f(void);
Suite *test_sprintf_g(void);
Suite *test_sprintf_G(void);
Suite *test_sprintf_o(void);
Suite *test_sprintf_s(void);
Suite *test_sprintf_u(void);
Suite *test_sprintf_x(void);
Suite *test_sprintf_X(void);
Suite *test_sprintf_p(void);
Suite *test_sprintf_n(void);
Suite *test_sprintf_percent(void);

#endif  // SRC_TESTS_MAIN_H_
