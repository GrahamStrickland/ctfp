#include "fact.h"

#include <iostream>

int main(int argc, char *argv[]) {
  for (int i = 0; i <= 12; ++i) {
    std::cout << i << "! = " << fact(i) << '\n';
  }

  return EXIT_SUCCESS;
}
