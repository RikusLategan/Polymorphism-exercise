#include "point1.h"

Point::Point(int a,int b) {setPoint(a, b);}

void Point::setPoint(int a, int b)
{
    x=a;
    y=b;
}


void Point::print() const {cout << "Point: " << x << ", " << y;}

int main()
{
    Point p;
    p.setPoint(1, 2);
    p.print();
}