#include "compose.h"
#include "identity.h"

#include <cassert>
#include <cmath>
#include <cstdlib>
#include <functional>
#include <numbers>

int main(int argc, char *argv[]) {
  std::function<double(double)> cos = [](auto x) { return std::cos(x); };
  std::function<double(double)> id = [](auto x) { return identity(x); };

  assert(compose(cos, id)(std::numbers::pi) == -1.0);
  assert(compose(id, cos)(std::numbers::pi) == -1.0);

  return EXIT_SUCCESS;
}
