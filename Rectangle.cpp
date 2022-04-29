//
// Created by user on 29.04.22.
//

#include "Rectangle.h"

float Rectangle::square() {
    float a = sqrt((x1 - x2) * (x1 - x2) + (y2 - y1) * (y2 - y1));
    float b = sqrt((x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4));
    float square = a * b;
    return square;
}
