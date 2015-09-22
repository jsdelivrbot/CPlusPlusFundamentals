#include <iostream>

int main() {
    float floatPI = 3.141592653589793238f;
    double doublePI = 3.141592653589793238;

    std::cout << floatPI << std::endl;
    std::cout << doublePI << std::endl;

    double a = 1.0f;
    double b = 0.33f;
    double sum = 1.33f;
    bool equal = (a + b == sum);

    std::cout << sum << " === " << a + b << std::endl;
    std::cout << equal << std::endl;

    return 0;
}
