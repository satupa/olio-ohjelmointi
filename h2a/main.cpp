#include "car.h"
#include "rectangle.h"
#include <iostream>
#include "student.h"
#include <memory>
using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Volkswagen");
    objCar.setModel("Passat");
    objCar.setYearModel(2017);
    objCar.printData();

    Rectangle *objRectangle;
    objRectangle=new Rectangle;
    objRectangle->setHeight(21);
    objRectangle->setWidth(26);
    objRectangle->getCircum();
    objRectangle->getArea();
    delete objRectangle;
    objRectangle=nullptr;

    unique_ptr<Student> objStudent=make_unique<Student>();
    objStudent->setName("Antti Anttila");
    objStudent->setStudentNumber(3366);
    objStudent->setAverage(4);
    cout<<"Nimi: "<<objStudent->getName()<<endl;
    cout<<"Opiskelijanumero: "<<objStudent->getStudentNumber()<<endl;
    cout<<"Keskiarvo: "<<objStudent->getAverage()<<endl;

    return 0;
}
