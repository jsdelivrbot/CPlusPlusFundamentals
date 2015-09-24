// "Copyright Telerik Academy 2015"
#include<iostream>


int main() {

    int n = 7;
    std::cout << (n << 2) << std::endl;


    std::cout << "2^" << n << " = " << (2 << (n - 1)) << std::endl;

    return 0;
}
