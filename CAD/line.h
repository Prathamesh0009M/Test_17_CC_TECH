#ifndef LINE_H
#define LINE_H

#include <bits/stdc++.h>
#include "shape.h"
using namespace std;

class Line : public Shape
{
public:
    int x1, x2, y1, y2;
    Line(int x1, int x2, int y1, int y2);
    void draw() override;
    Shape *clone() override;
    void area() override;
    void perimeter() override;
    void move() override;
    ~Line();
};

#endif