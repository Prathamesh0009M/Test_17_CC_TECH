#include <bits/stdc++.h>

using namespace std;

class CAD
{
public:
    virtual void display() = 0;
    virtual CAD *clone() = 0;
    virtual ~CAD() 
    {
        cout << "CAD object Destroyed" << endl;
    }
};

class Line : public CAD
{
    int x1, y1, x2, y2;

public:
    Line(int x1, int y1, int x2, int y2)
    {
        this->x1 = x1;
        this->x2 = x2;
        this->y1 = y1;
        this->y2 = y2;
    }

    void display() override
    {
        cout << "line:- " << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
    }

    CAD *clone() override
    {
        return new Line(x1, y1, x2, y2);
    }

    ~Line()
    {
        cout << "Line object Destroyed" << endl;
    }
};

class Circle : public CAD

{
public:
    int a, b, r;

    Circle(int a, int b, int r)
    {
        this->a = a;
        this->b = b;
        this->r = r;
    }

    void display() override
    {
        cout << "Circle :- " << a << " " << b << " " << r << endl;
    }

    CAD *clone() override
    {
        return new Circle(a, b, r);
    }
    ~Circle()
    {
        cout << "Circle object Destroyed" << endl;
    }
};

class DOCUMENT
{
public:
    vector<CAD *> objects;

    void addObject(CAD *obj)
    {
        objects.push_back(obj);
    }

    void listALLObjects()
    {
        for (int i = 0; i < objects.size(); i++)
        {
            cout << i + 1 << ". ";
            objects[i]->display();
        }
    }

    void removeObject(int index)
    {

        delete objects[index];
        objects.erase(objects.begin() + index);
    }

    void cloneObject(int index)
    {

        CAD *newObject = objects[index]->clone();
        objects.push_back(newObject);
        cout << "Object Cloned Successfully\n";
    }

    ~DOCUMENT()
    {
        for(auto obj:objects)
        {
            delete obj;
        }
        cout << "documents destroyed" << endl;
    }
};

class USERINTERFACE
{
public:
    DOCUMENT *doc;

    USERINTERFACE(DOCUMENT &docs)
    {
        this->doc = &docs;
    }

    void addLine()
    {
        int x1, x2, y1, y2;
        cout << "Enter Line Coordinate: x1, y1, x2, y2 " << endl;
        cin >> x1 >> y1 >> x2 >> y2;
        Line *line = new Line(x1, y1, x2, y2);
        doc->addObject(line);
        return;
    }

    void adddCircle()
    {
        int x, y, r;
        cout << "Enter Circle Coordinates : x,y,r" << endl;
        cin >> x >> y >> r;
        Circle *circle = new Circle(x, y, r);
        doc->addObject(circle);
        return;
    }

    void cloneNewObject()
    {
        cout << "Select object number to clone: " << endl;
        doc->listALLObjects();
        int input;
        cin >> input;

        doc->cloneObject(input - 1);
    }

    void DeleteObject()
    {
        doc->listALLObjects();

        cout << "Select object number to delete: ";
        int input;
        cin >> input;

        doc->removeObject(input - 1);
    }

    void listObjects()
    {
        doc->listALLObjects();
        cout << endl
             << endl;
    }

    int exit()
    {
        return -1;
    }
};

int main()
{
    DOCUMENT *docs = new DOCUMENT();
    USERINTERFACE user(*docs);

    user.addLine();
    user.adddCircle();
    user.listObjects();
    user.cloneNewObject();
    user.listObjects();
    user.DeleteObject();
    user.listObjects();

    delete docs;

    return 0;
}
