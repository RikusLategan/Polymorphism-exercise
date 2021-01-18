#ifndef SHAPE_H
#define SHAPE_H

class Shape{
  public:
    virtual int area() {return 0;}
    virtual int volume() const {return 0;}
    
    virtual void printShapeName() const = 0;
    virtual void print() const = 0;
    //virtual void printDetails() const = 0;
};

#endif