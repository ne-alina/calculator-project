// Calculator: basic arithmetic operations + power function
#include <iostream>
#include <stdexcept>
#include <cmath>

// Сложение двух чисел
double add(double a, double b) {
    return a + b;
}

// Вычитание двух чисел
double subtract(double a, double b) {
    return a - b;
}

// Умножение двух чисел
double multiply(double a, double b) {
    return a * b;
}

// Деление двух чисел с проверкой на ноль
double divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return a / b;
}

// Возведение в степень
// Возведение в степень с обработкой граничных случаев
double power(double base, double exponent) {
    if (base < 0 && std::fmod(exponent, 1.0) != 0) {
        throw std::invalid_argument("Negative base with fractional exponent");
    }
    if (std::isnan(std::pow(base, exponent))) {
        throw std::invalid_argument("Result is NaN");
    }
    return std::pow(base, exponent);
}

int main() {
    std::cout << "Calculator v1.0" << std::endl;
    std::cout << "2 + 3 = " << add(2, 3) << std::endl;
    std::cout << "10 - 4 = " << subtract(10, 4) << std::endl;
    std::cout << "3 * 5 = " << multiply(3, 5) << std::endl;
    std::cout << "10 / 2 = " << divide(10, 2) << std::endl;
    std::cout << "2 ^ 8 = " << power(2, 8) << std::endl;
    return 0;
}