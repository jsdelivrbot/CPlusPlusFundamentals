// "Copyright Telerik Academy 2015"
#include<iostream>


int main() {
    bool a = true;
    bool b = false;

    std::cout << (a && b) << std::endl;  // False
    std::cout << (a || b) << std::endl;  // True
    std::cout << (a ^ b) << std::endl;  // True
    std::cout << (!b) << std::endl;  // True
    std::cout << (b || true) << std::endl;  // True
    std::cout << (b && true) << std::endl;  // False
    std::cout << (a || true) << std::endl;  // True
    std::cout << (a && true) << std::endl;  // True
    std::cout << (!a) << std::endl;  // False
    std::cout << ((5 > 7) ^ (a == b)) << std::endl;  // False

    return 0;
}
