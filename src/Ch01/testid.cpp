#include "id.h"

#include <cassert>
#include <cmath>

int main(int argc, char *argv[]) {
  assert(id_func(abs(-1)) == 1);
  assert(id_func(fabs(-1.0)) == 1.0);
  assert(abs(id_func(-1)) == 1);
  assert(fabs(id_func(-1.0)) == 1.0);

  return EXIT_SUCCESS;
}
