// This program demonstrates multiple catch blocks.

#include <iostream>

void checkNumber(int num) {
    try {
        if (num == 1) {
            throw num; // throw integer
        } else if (num == 2) {
            throw 'x'; // throw character
        } else if (num == 3) {
            throw 1.1; // throw double
        }
        std::cout << "It's not 1, 2, or 3, it's " << num << std::endl;
    } catch (int e) {
        std::cout << "Caught an integer exception: " << e << std::endl;
    } catch (char e) {
        std::cout << "Caught a character exception: " << e << std::endl;
    } catch (double e) {
        std::cout << "Caught a double exception: " << e << std::endl;
    }
}

int main() {
    checkNumber(1);
    checkNumber(2);
    checkNumber(3);
    checkNumber(4);
    return 0;
}