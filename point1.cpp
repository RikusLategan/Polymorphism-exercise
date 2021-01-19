#include "point1.h"

Point::Point(int a) : x(a) {setPoint(a);}

void Point::setPoint(int a){x=a;}

void Point::print() const {cout << "Point: ";}

int main(){
    Point p;

    p.print();
}