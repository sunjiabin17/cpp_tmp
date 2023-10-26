#include "my_add.h"
#include <iostream>

template<typename T>
void my_add(const T a, const T b, T& c) {
    c = a + b;
}
