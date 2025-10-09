// This program demonstrates try/catch for exception handling.

#include <iostream>

int main() {
    try {
        int age = 15;
        if (age >= 18) {
            std::cout << "Access granted - you are old enough." << std::endl;
        } else {
            throw 505;
        }
    }
    catch (int myNum) {
        std::cout << "Access denied - You must be at least 18 years old." << std::endl;
        std::cout << "Error number: " << myNum << std::endl;
    }
    return 0;
}