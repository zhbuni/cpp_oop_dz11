//
// Created by user on 29.04.22.
//

#include "Romb.h"

float Romb::square() {
    float a = sqrt((x1 - x3) * (x1 - x3) + (y3 - y1) * (y3 - y1));
    float b = sqrt((x2 - x4) * (x2 - x4) + (y2 - y4) * (y2 - y4));
    float square = a * b;
    return square;
}
