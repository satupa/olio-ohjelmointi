#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle();
    double getWidth() const;
    void setWidth(double newWidth);
    double getHeight() const;
    void setHeight(double newHeight);
    void getArea ();
    void getCircum ();
};

#endif // RECTANGLE_H
