#include "compose.h"

#include <cassert>
#include <cmath>
#include <cstdlib>
#include <numbers>

int main(int argc, char *argv[]) {
  using namespace std::numbers;

  assert(compose([](double x) { return std::asin(x); },
                 [](double x) { return std::sin(x); }, pi / 2.0) == pi / 2.0);
  assert(compose([](double x) { return std::sin(x); },
                 [](double x) { return std::asin(x); }, pi / 4.0) == pi / 4.0);
  assert(compose([](double x) { return std::acos(x); },
                 [](double x) { return std::cos(x); }, pi / 4.0) == pi / 4.0);
  assert(compose([](double x) { return std::cos(x); },
                 [](double x) { return std::acos(x); }, pi / 4.0) == pi / 4.0);
  assert(compose([](double x) { return std::atan(x); },
                 [](double x) { return std::tan(x); }, pi / 4.0) == pi / 4.0);
  assert(compose([](double x) { return std::tan(x); },
                 [](double x) { return std::atan(x); }, 0.0) == 0.0);

  return EXIT_SUCCESS;
}
