#include <iostream>

int count = 0;

void increaseCount() {
    count += 1;
}

int main() {

    std::cout << "Count is " << count << std::endl;
    increaseCount();
    std::cout << "Count is " << count << std::endl;
    increaseCount();
    std::cout << "Count is " << count << std::endl;
    increaseCount();
    std::cout << "Count is " << count << std::endl;
    return 0;
}