#include "main.h"

int main(void) {
  int failed_count = 0;

  SRunner *suite_runner = srunner_create(test_string());
  srunner_add_suite(suite_runner, test_c_sharp());
  srunner_add_suite(suite_runner, test_sprintf_c());
  srunner_add_suite(suite_runner, test_sprintf_d());
  srunner_add_suite(suite_runner, test_sprintf_i());
  srunner_add_suite(suite_runner, test_sprintf_e());
  srunner_add_suite(suite_runner, test_sprintf_E());
  srunner_add_suite(suite_runner, test_sprintf_f());
  srunner_add_suite(suite_runner, test_sprintf_g());
  srunner_add_suite(suite_runner, test_sprintf_G());
  srunner_add_suite(suite_runner, test_sprintf_o());
  srunner_add_suite(suite_runner, test_sprintf_s());
  srunner_add_suite(suite_runner, test_sprintf_u());
  srunner_add_suite(suite_runner, test_sprintf_x());
  srunner_add_suite(suite_runner, test_sprintf_X());
  srunner_add_suite(suite_runner, test_sprintf_p());
  srunner_add_suite(suite_runner, test_sprintf_n());
  srunner_add_suite(suite_runner, test_sprintf_percent());

  srunner_run_all(suite_runner, CK_NORMAL);

  failed_count = srunner_ntests_failed(suite_runner);
  srunner_free(suite_runner);

  printf("\n\n_____ALL FAILED : %d_____\n\n", failed_count);

  return (failed_count != 0) ? 1 : 0;
}
