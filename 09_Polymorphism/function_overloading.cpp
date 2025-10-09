// This program demonstrates function overloading.

#include <iostream>

class PrintData {
public:
    void print(int i) {
        std::cout << "Printing int: " << i << std::endl;
    }
    void print(double f) {
        std::cout << "Printing float: " << f << std::endl;
    }
    void print(char const* c) {
        std::cout << "Printing character: " << c << std::endl;
    }
};

int main() {
    PrintData pd;
    pd.print(5);
    pd.print(500.263);
    pd.print("Hello C++");
    return 0;
}