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
}
