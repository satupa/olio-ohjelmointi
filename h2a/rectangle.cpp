#include "rectangle.h"

double Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

double Rectangle::getHeight() const
{
    return height;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

void Rectangle::getArea() //pinta-ala
{
    double area = getHeight() * getWidth();
    cout<<"Pinta-ala on: "<<area<<endl;
    cout<<"-----------------------"<<endl;
}

void Rectangle::getCircum() //ympärysmitta
{
    double circum = 2*(getHeight() + getWidth());
    cout<<"Ymparysmitta on: "<<circum<<endl;

}

Rectangle::Rectangle() {}
