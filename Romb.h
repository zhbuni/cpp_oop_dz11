//
// Created by user on 29.04.22.
//

#ifndef DZ11_ROMB_H
#define DZ11_ROMB_H

#include "Quadrilateral.h"
#include <math.h>

class Romb: public Quadrilateral{
    using Quadrilateral::Quadrilateral;

    float square() override;
};


#endif //DZ11_ROMB_H
