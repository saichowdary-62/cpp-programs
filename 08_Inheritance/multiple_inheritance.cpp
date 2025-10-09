// This program demonstrates multiple inheritance.

#include <iostream>

// First base class
class Base1 {
public:
    void func1() {
        std::cout << "Function from Base1" << std::endl;
    }
};

// Second base class
class Base2 {
public:
    void func2() {
        std::cout << "Function from Base2" << std::endl;
    }
};

// Derived class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    void func3() {
        std::cout << "Function from Derived" << std::endl;
    }
};

int main() {
    Derived obj;
    obj.func1(); // Accessing function from Base1
    obj.func2(); // Accessing function from Base2
    obj.func3(); // Accessing function from Derived
    return 0;
}