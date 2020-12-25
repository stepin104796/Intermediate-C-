#ifndef __COLLECTION_H
#define __COLLECTION_H

#include "point.h"
#include<vector>
#include<string>
class Collection
{
    std::vector<Point> points;
    public:
    void displayAll();
    void addPoint(int x,int y);
    int countQuadrant(int quad);
    Point* findPointByQuad(int quad);
    int count()const{return points.size();}


};

#endif

/*
 * addPoint
    * display all points
    * count all points in a particular quadrant
    * count all points lies on a circle boundary with given radius
    * find all points in a particular quadrant
    * find all points lies on a circle boundary with given radius
    * 
    * 
     */