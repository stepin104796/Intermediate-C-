#include "point.h"
#include "point.cpp"
#include "collection.h"
#include "collection.cpp"
#include<iostream>

int main()
{
    Collection c1;
    c1.addPoint(2,3);
    c1.addPoint(-2,-3);
    c1.addPoint(2,-3);
    c1.addPoint(-2,3);
    c1.addPoint(-1,-2);
    c1.addPoint(-4,-3);
    c1.addPoint(1,-3);
    c1.addPoint(2,4);
    std::cout<<c1.count();
    std::cout<<"------------------------\n";
    c1.displayAll();
    std::cout<<"------------------------\n";
    std::cout<<c1.countQuadrant(2);
    std::cout<<"------------------------\n";
    c1.findPointByQuad(1)->display();
    std::cout<<"------------------------\n";
    return 0;

}