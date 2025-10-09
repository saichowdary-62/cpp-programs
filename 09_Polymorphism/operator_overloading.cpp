// This program demonstrates operator overloading.

#include <iostream>

class Box {
private:
    double length;
    double breadth;
    double height;

public:
    // Constructor definition
    Box(double l = 2.0, double b = 2.0, double h = 2.0) {
        length = l;
        breadth = b;
        height = h;
    }

    double getVolume() {
        return length * breadth * height;
    }

    // Overload + operator to add two Box objects.
    Box operator+(const Box& b) {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }
};

int main() {
    Box Box1(6.0, 7.0, 5.0);    // Declare Box1 of type Box
    Box Box2(12.0, 13.0, 10.0);   // Declare Box2 of type Box
    Box Box3;                   // Declare Box3 of type Box
    double volume = 0.0;        // Store the volume of a box here

    // volume of box 1
    volume = Box1.getVolume();
    std::cout << "Volume of Box1 : " << volume << std::endl;

    // volume of box 2
    volume = Box2.getVolume();
    std::cout << "Volume of Box2 : " << volume << std::endl;

    // Add two objects as follows:
    Box3 = Box1 + Box2;

    // volume of box 3
    volume = Box3.getVolume();
    std::cout << "Volume of Box3 : " << volume << std::endl;

    return 0;
}