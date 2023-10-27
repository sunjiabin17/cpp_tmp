#include "my_add.h"
#include <iostream>

int my_add(const int a, const int b) {
  std::cout << "my_add(int, int) called" << std::endl;
  return a + b;
}