//
// Created by user on 29.04.22.
//

#ifndef DZ11_RECTANGLE_H
#define DZ11_RECTANGLE_H

#include "Quadrilateral.h"
#include <math.h>

class Rectangle: public Quadrilateral{
public:
    using Quadrilateral::Quadrilateral;
    float square() override;

};


#endif //DZ11_RECTANGLE_H
