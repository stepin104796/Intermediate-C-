#ifndef __GPOINT_H
#define __GPOINT_H

#include<iostream>

enum Quadrant {
  Q1=1,
  Q2=2,
  Q3=3,
  Q4=4
};


template<typename T>
class Point {
  T m_x;
  T m_y;
  public:
  Point();
  Point(T,T);
  void distanceFromOrigin();
  Quadrant quadrant();
  void display();
};

#endif
