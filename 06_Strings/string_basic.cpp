// This program demonstrates basic string operations.

#include <iostream>
#include <string>

int main() {
    std::string greeting = "Hello";
    std::string name = "World";
    std::string message;

    message = greeting + ", " + name + "!";
    std::cout << message << std::endl;
    std::cout << "Length of the message: " << message.length() << std::endl;

    return 0;
}