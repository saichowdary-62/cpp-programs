// This program demonstrates a two-dimensional array.

#include <iostream>

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    std::cout << "Elements of the 2D array are: " << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << "matrix[" << i << "][" << j << "] = " << matrix[i][j] << std::endl;
        }
    }

    return 0;
}