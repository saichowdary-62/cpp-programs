// This program demonstrates access specifiers (public, private, protected).

#include <iostream>
#include <string>

class MyClass {
public:
    int publicVar; // Accessible from anywhere
private:
    int privateVar; // Accessible only within the class
protected:
    int protectedVar; // Accessible within the class and by derived classes
public:
    void setPrivateVar(int val) {
        privateVar = val;
    }
    int getPrivateVar() {
        return privateVar;
    }
};

int main() {
    MyClass obj;
    obj.publicVar = 10;
    // obj.privateVar = 20; // Error: privateVar is private
    obj.setPrivateVar(20);

    std::cout << "Public variable: " << obj.publicVar << std::endl;
    std::cout << "Private variable accessed via getter: " << obj.getPrivateVar() << std::endl;

    return 0;
}