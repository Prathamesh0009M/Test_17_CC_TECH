#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <bits/stdc++.h>
#include "shape.h"
using namespace std;

class Document
{
private:
    vector<Shape *> shapes;

public:
    Document();
    void addShape(Shape *s);
    void removeShape(int index);
    void listShapes();
    ~Document();
};
#endif