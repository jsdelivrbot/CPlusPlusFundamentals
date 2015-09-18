// "Copyright Telerik Academy 2015"
#include<iostream>


int main() {
    int squarePerimeter = 17;
    double squareSide = squarePerimeter / 4.0;
    double squareArea = squareSide * squareSide;
    std::cout << squareSide << std::endl;  //  4.25
    std::cout << squareArea << std::endl;  //  18.0625

    int a = 5;
    int b = 4;
    std::cout << a + b << std::endl;  // 9
    std::cout << a + b++ << std::endl;  // 9
    std::cout << a + b << std::endl;  // 10
    std::cout << a + (++b) << std::endl;  // 11
    std::cout << a + b << std::endl;  // 11

    std::cout << 12 / 3 << std::endl;  // 4
    std::cout << 11 / 3 << std::endl;  // 3

    std::cout << 11.0 / 3 << std::endl;  // 3.666666667
    std::cout << 11 / 3.0 << std::endl;;  // 3.666666667
    std::cout << 11 % 3 << std::endl;;  // 2
    std::cout << 11 % -3 << std::endl;;  // 2
    std::cout << -11 % 3 << std::endl;;  // -2

    std::cout << 1.5 / 0.0 << std::endl;;  // inf
    std::cout << -1.5 / 0.0 << std::endl;;  // -inf
    std::cout << 0.0 / 0.0 << std::endl;;  // nan

    int x = 0;
    std::cout << 5 / x << std::endl;  // throws exception

    return 0;
}
