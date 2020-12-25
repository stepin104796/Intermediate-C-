#include "collection.h"
 void Collection::displayAll()
 {
     std::vector<Point>::iterator iter;
     for(iter=points.begin();iter!=points.end();++iter)
     {
         iter->display();
     }
 }
 void Collection::addPoint(int x,int y)
 {
     points.emplace_back(x,y);
 }
 int Collection::countQuadrant(int quad)
 {
     int count=0;
     std::vector<Point>::iterator iter;
     for(iter=points.begin();iter!=points.end();++iter)
     {
         if(iter->quadrant()==quad)
         {
             count++;
         }
     }
     return count;
 }
Point* Collection::findPointByQuad(int quad)
{
    std::vector<Point>::iterator iter;
   for(iter=points.begin(); iter!=points.end(); ++iter)
   {
       if(iter->quadrant() == quad)
          break;
   }
   if(iter!=points.end())
     return &(*iter);
   else
     return nullptr;
}