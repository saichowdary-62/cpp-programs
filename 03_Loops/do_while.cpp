// This program demonstrates the do-while loop.

#include <iostream>

int main() {
    int i = 1;
    std::cout << "Printing numbers from 1 to 5:" << std::endl;
    do {
        std::cout << i << " ";
        i++;
    } while (i <= 5);
    std::cout << std::endl;

    return 0;
}