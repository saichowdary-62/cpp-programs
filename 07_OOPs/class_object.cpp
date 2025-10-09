// This program demonstrates classes and objects.

#include <iostream>
#include <string>

class Dog {
public:
    std::string breed;
    int age;

    void bark() {
        std::cout << "Woof! Woof!" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.breed = "Golden Retriever";
    myDog.age = 3;

    std::cout << "My dog is a " << myDog.breed << " and is " << myDog.age << " years old." << std::endl;
    myDog.bark();

    return 0;
}