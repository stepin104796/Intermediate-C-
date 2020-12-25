#include "point.h"
#include<cmath>

Point::Point():m_x(0),m_y(0){}
Point::Point(int x, int y):m_x(x),m_y(y){}
Point::Point(int value):m_x(value),m_y(value){}
double Point::distanceBtwPoints(const Point& p1,const Point& p2)
{
    return (sqrt(((p1.m_x)-(p2.m_x))^2)+(((p1.m_y)-(p2.m_y))^2));
}
Point Point::newPointVrt(const Point& p1)
{
    Point temp;
    temp.m_x=m_x*-1;
    temp.m_y=m_y;
    return temp;
}
Point Point::newPointHrz(const Point& p1)
{
    Point temp;
    temp.m_x=m_x;
    temp.m_y=m_y*-1;
    return temp;
}
Point Point::displacePoint(double x)
{
    return Point(m_x+x,m_y+x);
}
int Point::getx() const
{
    return m_x;
}
int Point::gety() const
{
    return m_y;
}
void Point::display() const
{
    std::cout<<"Point("<<m_x<<","<<m_y<<")"<<"\n";
}
int Point::quadrant() const
{
    if((m_x>=0)&&(m_y>=0))
    {
        return 1;
    }
    else if((m_x<=0)&&(m_y>=0))
    {
        return 2;
    }
    else if((m_x<=0)&&(m_y<=0))
    {
        return 3;
    }
    else
    {
        return 4;
    }
}