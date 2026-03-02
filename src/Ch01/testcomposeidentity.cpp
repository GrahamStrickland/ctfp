#include "compose.h"
#include "identity.h"

#include <cassert>
#include <cmath>
#include <cstdlib>

int main(int argc, char *argv[]) {
  assert(compose(std::cos, identity, -1.0) == 1.0);
  assert(compose(identity, std::cos, -1.0) == 1.0);

  return EXIT_SUCCESS;
}
