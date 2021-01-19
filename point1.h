
#ifndef POINT_H
#define POINT_H

#include <iostream>

using std::cout;

#include "shape.h"

class Point : public Shape{
    public:
        Point(int x=0,int y=0);

        void setPoint(int,int);

        //virtual void printShapeName() const {cout << "Point: " << x << ", "<< y;}
        virtual void print() const;
        //virtual void printDetails() const;

    private:
        int x,y;
};

#endif