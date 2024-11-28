#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "engine.h"
#include "wheel.h"
using namespace std;

class Car
{
private:
    string model;
    string brand;
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;

public:
    Car();
    Car(string, string);
    void printDetails();
    void setEngine (int, double);
    void setWheels (int, string);
    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);
};

#endif // CAR_H
