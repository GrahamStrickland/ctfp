#include "compose.h"

#include <cassert>
#include <cmath>
#include <cstdlib>
#include <functional>
#include <numbers>

int main(int argc, char *argv[]) {
  std::function<double(double)> sin = [](auto x) { return std::sin(x); };
  std::function<double(double)> asin = [](auto x) { return std::asin(x); };
  std::function<double(double)> cos = [](auto x) { return std::cos(x); };
  std::function<double(double)> acos = [](auto x) { return std::acos(x); };
  std::function<double(double)> tan = [](auto x) { return std::tan(x); };
  std::function<double(double)> atan = [](auto x) { return std::atan(x); };

  assert(compose(asin, sin)(std::numbers::pi / 2.0) == std::numbers::pi / 2.0);
  assert(compose(sin, asin)(std::numbers::pi / 4.0) == std::numbers::pi / 4.0);
  assert(compose(acos, cos)(std::numbers::pi / 4.0) == std::numbers::pi / 4.0);
  assert(compose(cos, acos)(std::numbers::pi / 4.0) == std::numbers::pi / 4.0);
  assert(compose(atan, tan)(std::numbers::pi / 4.0) == std::numbers::pi / 4.0);
  assert(compose(tan, atan)(0.0) == 0.0);

  return EXIT_SUCCESS;
}
