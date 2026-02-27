#include<bits/stdc++.h>
#include "line.h"
using namespace std;


Line::Line(int x1, int x2, int y1, int y2) : x1(x1), x2(x2), y1(y1), y2(y2)
{
    cout << "Line object created" << endl;
}
Line::~Line()
{
    cout << "Line object destroyed" << endl;
}

void Line::draw()
{
    cout << "drawing the line" << endl;
}
void Line::area()
{
    cout << "area of line is zero" << endl;
}

void Line::perimeter()
{
    cout << "perimeter of line is zero" << endl;
}

void Line::move()
{
    cout << "move line" << endl;
}

Shape* Line::clone()
{
    cout << "cloning line" << endl;
    return new Line(*this);
}




