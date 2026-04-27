#include <iostream>
#include <stdexcept>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return a / b;
}

int main() {
    std::cout << "Calculator" << std::endl;
    std::cout << "2 + 3 = " << add(2, 3) << std::endl;
    std::cout << "10 - 4 = " << subtract(10, 4) << std::endl;
    std::cout << "3 * 5 = " << multiply(3, 5) << std::endl;
    std::cout << "10 / 2 = " << divide(10, 2) << std::endl;
    return 0;
}