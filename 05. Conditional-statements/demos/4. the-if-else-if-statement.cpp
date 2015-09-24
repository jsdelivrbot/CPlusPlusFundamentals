#include<iostream>

int main() {
    char ch = 'X';
    if (ch == 'A' || ch == 'a') {
        std::cout << "Vowel [ei]" << std::endl;
    }
    else if (ch == 'E' || ch == 'e') {
        std::cout << "Vowel [i:]" << std::endl;
    }
    else if (ch == 'O' || ch == 'o') {
        std::cout << "Vowel [ou]" << std::endl;
    }
    else if (ch == 'I' || ch == 'i') {
        std::cout << "Vowel [ai]" << std::endl;
    }
    else {
        std::cout << "The Consonant [" << ch << "]" << std::endl;
    }
    return 0;
}