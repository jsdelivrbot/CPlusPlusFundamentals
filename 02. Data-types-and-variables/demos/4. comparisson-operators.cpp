// "Copyright Telerik Academy 2015"

#include<iostream>

int main() {
    int a = 5;
    int b = 4;

    std::cout << (a >= b) << std::endl;    // True
    std::cout << (a != b) << std::endl;    // True
    std::cout << (a == b) << std::endl;    // False
    std::cout << (a == a) << std::endl;    // True
    std::cout << (a != ++b) << std::endl;  // False
    std::cout << (a > b) << std::endl;     // False

    int x = 6;
    int y = 4;
    std::cout << (y *= 2) << std::endl;  // 8

    int z = y = 3;             // y=3 and z=3
    std::cout << (z);               // 3
    std::cout << (x |= 1) << std::endl;  // 7
    std::cout << (x += 3) << std::endl;  // 10
    std::cout << (x /= 2) << std::endl;  // 5

    return 0;
}
