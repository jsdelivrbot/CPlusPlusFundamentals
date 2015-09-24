#include<iostream>

int main() {
    int number;
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << "This number is even!" << std::endl;
    } else {
        std::cout << "This number is odd!" << std::endl;
    }

    return 0;
}