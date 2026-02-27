#include<bits/stdc++.h>
#include "Document.h"
using namespace std;


Document::Document()
{
    cout << "Document created" << endl;
}
void Document::addShape(Shape *s)
{
    shapes.push_back(s);
}

void Document::removeShape(int index)
{
    delete shapes[index];
    shapes.erase(shapes.begin() + index);
}

void Document::listShapes()
{
    for (int i = 0; i < shapes.size(); i++)
    {
        cout << i + 1 << ". ";
        shapes[i]->draw();
    }
}   

Document::~Document()
{
    for (auto shape : shapes)
    {
        delete shape;
    }
    cout << "Document destroyed" << endl;
}




