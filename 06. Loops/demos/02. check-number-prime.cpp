//  "Copyright Telerik Academy 2015"

#include <math.h>
#include <iostream>

int main() {
    int number;
    std::cout << "N= ";
    std::cin >> number;

    int divider = 2;
    int maxDivider = sqrt(number);
    bool isPrime = true;

    while (isPrime && divider < maxDivider) {
        if (number % divider == 0) {
            isPrime = false;
        }
        divider++;
    }

    std::cout << "Is the number prime? " << ((isPrime)
              ? "Yes"
              : "No") << std::endl;
    return 0;
}
