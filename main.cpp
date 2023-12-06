// main.cpp
#include <iostream>
#include "mathlib.h"

int main() {
    int a = 10, b = 5;

    std::cout << "Addition: " << MathLib::add(a, b) << std::endl;
    std::cout << "Subtraction: " << MathLib::subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << MathLib::multiply(a, b) << std::endl;

    try {
        std::cout << "Division: " << MathLib::divide(a, b) << std::endl;
    } catch (const char* error) {
        std::cerr << "Error: " << error << std::endl;
    }

    return 0;
}
