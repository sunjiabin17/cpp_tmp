#include "my_add.h"
#include <iostream>

template<typename T>
T my_add(const T a, const T b, T& c) {
    return a + b;
}
