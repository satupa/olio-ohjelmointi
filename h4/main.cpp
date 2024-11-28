#include <iostream>
#include "engine.h"
#include "wheel.h"
#include "car.h"
using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Toyota");
    objCar.setModel("Corolla");
    objCar.setEngine(150, 2.0);
    objCar.printDetails();

    return 0;
}
