#include<iostream>

int main() {
    int first, second;
    std::cin >> first >> second;

    if (first == second) {
        std::cout << first << " is equal to " << second << std::endl;
    } else {
        if (first > second) {
            std::cout << first << " is bigger than " << second << std::endl;
        } else {
            std::cout << second << " is bigger than " << first << std::endl;
        }
    }
    return 0;
}