#include <bits/stdc++.h>
#include "shape.h"
using namespace std;

Line::Line(int x1, int y1, int x2, int y2)
{
    this->x1 = x1;
    this->x2 = x2;
    this->y1 = y1;
    this->y2 = y2;
}

CAD *Line::clone()
{
    return new Line(x1, y1, x2, y2);
}

void Line::display()
{
    cout << "line:- " << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
}

Line::~Line()
{
    cout << "Line Destroyed\n";
}




Circle::Circle(int a, int b, int r)
{
    this->a = a;
    this->b = b;
    this->r = r;
}

void Circle::display()
{
    cout << "Circle :- " << a << " " << b << " " << r << endl;
}

CAD *Circle::clone()
{
    return new Circle(a, b, r);
}
Circle::~Circle()
{
    cout << "Circle Destroyed\n";
}


