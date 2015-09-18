// "Copyright Telerik Academy 2015"
#include<iostream>

int main() {
    std::cout << "Please enter a character: ";

    char ch;
    std::cin >> ch;

    if (ch == 'A' || ch == 'a')    {
        std::cout << "Vowel [ei]";
    } else if (ch == 'E' || ch == 'e') {
        std::cout << "Vowel [i:]";
    } else if (ch == 'I' || ch == 'i') {
        std::cout << "Vowel [ai]";
    } else if (ch == 'O' || ch == 'o') {
        std::cout << "Vowel [ou]";
    } else if (ch == 'U' || ch == 'u') {
        std::cout << "Vowel [ju:]";
    } else {
        std::cout << "Consonant";
    }
    std::cout << std::endl;

    return 0;
}
