// This program demonstrates a one-dimensional array.

#include <iostream>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    std::cout << "Elements of the array are: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}