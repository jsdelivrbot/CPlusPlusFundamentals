//  "Copyright Telerik Academy 2015"
#include <iostream>

int main() {
  std::cout << "N= ";
  int n;
  std::cin >> n;

  int sum = 0;
  int number = 0;
  while (number <= n) {
    sum += number;
    number++;
  }
  std::cout << "The sum is " << sum << std::endl;

  return 0;
}
