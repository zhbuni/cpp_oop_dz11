#include <iostream>

#include "Rectangle.h"

int main() {
    Rectangle *r = new Rectangle("Grey", 0, 0, 1, 0, 1, 1, 0, 1);

    std::cout << r->square() << std::endl;
    return 0;
}
