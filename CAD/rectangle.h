#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class Rectangle : public Shape
{
public:
    int L, W;
    Rectangle(int L,int W);

    void draw() override;
    Shape *clone() override;
    void area() override;
    void perimeter() override;
    void move() override;
    ~Rectangle();
};

#endif
