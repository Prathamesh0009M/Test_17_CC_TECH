#include "rectangle.h"
#include "Repository.h"
#include <iostream>

int main()
{
    Repository<Shape> repo;

    repo.add(new Rectangle(10, 5));
    repo.list();

    Shape* cloned = repo.get(0)->clone();
    repo.add(cloned);

    std::cout << "After cloning:\n";
    repo.list();

    return 0;
}   