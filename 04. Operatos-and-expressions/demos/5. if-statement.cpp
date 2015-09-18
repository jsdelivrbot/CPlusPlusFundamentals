// "Copyright Telerik Academy 2015"
#include<iostream>

int main() {
    std::cout << "Enter two numbers:" << std::endl;

    int biggerNumber;
    int smallerNumber;
    std::cin >> biggerNumber >> smallerNumber;

    if (smallerNumber > biggerNumber) {
        biggerNumber = smallerNumber;
    }

    std::cout << "The greater number is: " << biggerNumber << std::endl;

    return 0;
}
