// This program demonstrates the switch statement.

#include <iostream>

int main() {
    char grade;

    std::cout << "Enter your grade (A, B, C, D, or F): ";
    std::cin >> grade;

    switch (grade) {
        case 'A':
            std::cout << "Excellent!" << std::endl;
            break;
        case 'B':
            std::cout << "Well done" << std::endl;
            break;
        case 'C':
            std::cout << "You passed" << std::endl;
            break;
        case 'D':
            std::cout << "Better try again" << std::endl;
            break;
        case 'F':
            std::cout << "You failed" << std::endl;
            break;
        default:
            std::cout << "Invalid grade" << std::endl;
    }

    return 0;
}