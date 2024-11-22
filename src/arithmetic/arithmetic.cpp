// arithmetic.cpp

#include "arithmetic.h"
#include <iostream>
#include <fmt/format.h>

namespace Arithmetic {

    int Math::add(int a, int b) {
		std::cout << fmt::format("this is from fmt lib") << std::endl;
        auto result = a + b;
        return result;
    }

    int Math::sub(int a, int b) { return a - b; }

    int Math::mult(int a, int b) { return a * b; }

} // namespace Arithmetic