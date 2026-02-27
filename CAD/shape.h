#ifndef SHAPE_H
#define SHAPE_H

class Shape{
    public:
    // Shape();
    virtual void  draw() = 0;
    virtual Shape*  clone() = 0;
    virtual void  area() = 0;
    virtual void  perimeter() = 0;
    virtual void  move() = 0;
    virtual ~Shape();
};

#endif



