//
// Created by user on 29.04.22.
//

#ifndef DZ11_SHAPE_H
#define DZ11_SHAPE_H

#include <string>

class Shape {
    std::string color;

public:
    Shape(std::string color){
        this->color = color;
    }
    ~Shape(){}
    virtual float square() = 0;
};


#endif //DZ11_SHAPE_H
