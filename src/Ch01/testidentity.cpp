#include "identity.h"

#include <cassert>
#include <cmath>

int main(int argc, char *argv[]) {
  assert(identity(abs(-1)) == 1);
  assert(identity(fabs(-1.0)) == 1.0);
  assert(abs(identity(-1)) == 1);
  assert(fabs(identity(-1.0)) == 1.0);

  return EXIT_SUCCESS;
}
