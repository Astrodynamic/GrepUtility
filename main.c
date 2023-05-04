#include "grep_utility.h"

int main(int argc, char **argv) {
  g_opt opt = {OPTBIT_D, "e:ivclnhsf:o", {0}, {0}};

  check_grep_options(&argc, &argv, &opt);
  if (!(opt.mutual & (1 << OPTBIT_E)) && !(opt.mutual & (1 << OPTBIT_F)))
    take_regexp_patterns(&argc, &argv, &opt);
  grep_print_with_opt(&argc, &argv, &opt);
  return EXIT_SUCCESS;
}
