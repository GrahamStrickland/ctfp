#include "compose.h"
#include "id.h"

#include <cassert>
#include <cmath>
#include <cstdlib>

int main(int argc, char *argv[]) {
  assert(compose(std::cos, id_func, -1.0) == 1.0);
  assert(compose(id_func, std::cos, -1.0) == 1.0);

  return EXIT_SUCCESS;
}
