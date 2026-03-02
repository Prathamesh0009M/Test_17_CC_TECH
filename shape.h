#ifndef SHAPE_H
#define SHAPE_H

#include <bits/stdc++.h>
using namespace std;

class CAD
{
public:
    virtual void display() = 0;
    virtual CAD *clone() = 0;
};

class Line : public CAD
{
    int x1, y1, x2, y2;

public:
    Line(int x1, int y1, int x2, int y2): x1(x1), y1(y1), x2(x2), y2(y2) {}
    void display() override;

    CAD *clone() override;
    ~Line();
};

class Circle : public CAD
{
public:
    int a, b, r;
    Circle(int a, int b, int r) : a(a), b(b), r(r) {}
    void display() override;
    CAD *clone() override;

        ~Circle();
};

#endif
