
#ifndef POINT_H
#define POINT_H

#include <iostream>

using std::cout;

#include "shape.h"

class Point : public Shape{
    public:
        Point(int = 0);

        void setPoint(int);

        virtual void printShapeName() const {cout << "Point: ";}
        virtual void print() const;
        //virtual void printDetails() const;

    private:
        int x;
};

#endif