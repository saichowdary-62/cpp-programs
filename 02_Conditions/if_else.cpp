// This program demonstrates the if-else statement.

#include <iostream>

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "You entered a positive integer: " << number << std::endl;
    } else if (number < 0) {
        std::cout << "You entered a negative integer: " << number << std::endl;
    } else {
        std::cout << "You entered 0." << std::endl;
    }

    return 0;
}