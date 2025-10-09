// This program demonstrates the while loop.

#include <iostream>

int main() {
    int i = 1;
    std::cout << "Printing numbers from 1 to 5:" << std::endl;
    while (i <= 5) {
        std::cout << i << " ";
        i++;
    }
    std::cout << std::endl;

    return 0;
}