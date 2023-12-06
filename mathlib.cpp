// mathlib.cpp
#include "mathlib.h"

int MathLib::add(int a, int b) {
    return a + b;
}

int MathLib::subtract(int a, int b) {
    return a - b;
}

int MathLib::multiply(int a, int b) {
    return a * b;
}

double MathLib::divide(int a, int b) {
    if (b != 0) {
        return static_cast<double>(a) / b;
    } else {
        throw "Division by zero!";
    }
}
