// "Copyright Telerik Academy 2015"
#include<iostream>


int main() {
    int a = 3;                // 00000000 00000011
    int b = 5;                // 00000000 00000101
    std::cout << (a | b) << std::endl;  // 00000000 00000111
    std::cout << (a & b) << std::endl;   // 00000000 00000001
    std::cout << (a ^ b) << std::endl;   // 00000000 00000110
    std::cout << (~a & b) << std::endl;  // 00000000 00000100
    std::cout << (a << 1) << std::endl;  // 00000000 00000110
    std::cout << (a >> 1) << std::endl;  // 00000000 00000001

    return 0;
}
