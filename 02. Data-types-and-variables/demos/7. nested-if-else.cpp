// "Copyright Telerik Academy 2015"
#include<iostream>

int main() {
    int first, second;
    std::cin >> first >> second;

    if (first == second) {
        std::cout << "These two numbers are equal." << std::endl;
    } else {
        if (first > second) {
            std::cout << "The first number is bigger." << std::endl;
        } else {
            std::cout << "The second is bigger." << std::endl;
        }
    }

    return 0;
}
