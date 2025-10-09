// This program demonstrates a constructor.

#include <iostream>

class Line {
public:
    void setLength(double len);
    double getLength(void);
    Line();  // This is the constructor

private:
    double length;
};

// Member functions definitions including constructor
Line::Line(void) {
    std::cout << "Object is being created" << std::endl;
}

void Line::setLength(double len) {
    length = len;
}

double Line::getLength(void) {
    return length;
}

// Main function for the program
int main() {
    Line line;

    // set line length
    line.setLength(6.0);
    std::cout << "Length of line : " << line.getLength() << std::endl;

    return 0;
}