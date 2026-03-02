#include <bits/stdc++.h>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(int L, int W) : L(L), W(W)
{
    cout << "Rectangle object created" << endl;
}

void Rectangle::area()
{
    cout << "area of the rectangle" << endl;
}

Shape *Rectangle::clone()
{
    cout << "cloning rectangle" << endl;
    return new Rectangle(*this);
}
void Rectangle::perimeter()
{
    cout << "perimeter of rcctangle" << endl;
}

void Rectangle::move()
{
    cout << "move rect";
}
void Rectangle::draw()
{
    cout << "drwaing the rectangle" << endl;
}

Rectangle::~Rectangle()
{
    cout << "Rectangle called" << endl;
}
