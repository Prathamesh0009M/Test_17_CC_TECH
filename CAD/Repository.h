// #ifndef REPOSITORY_H
// #define REPOSITORY_H

// template <typename T>
// class Repository
// {
// public:
//     vector<T *> objects;

//     void add(T *obj);
//     void list();
//     T *get(int ind);
//     ~Repository();
// };

// #endif


#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <vector>
#include <iostream>
using namespace std;

template <typename T>
class Repository
{
public:
    vector<T *> objects;

    void add(T *obj) {
        objects.push_back(obj);
    }

    void list() {
        for (auto obj : objects) {
            obj->draw();
        }
    }

    T *get(int ind) {
        if (ind < 0 || ind >= objects.size())
            return nullptr;
        return objects[ind];
    }

    ~Repository() {
        for (auto obj : objects)
            delete obj;
    }
};

#endif