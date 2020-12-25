#ifndef __POINT_H
#define __POINT_H

#include<iostream>
#include<string>
class Point
{
    int m_x;
    int m_y;
    public:
    Point();
    Point(int, int);
    Point(int);
    double distanceBtwPoints(const Point&,const Point&);
    Point newPointVrt(const Point&);
    Point newPointHrz(const Point&);
    Point displacePoint(double);
    int getx() const;
    int gety() const;
    void display() const;
    int quadrant() const;

};

#endif