#include "car.h"

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

Car::Car() {


    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");
    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");
    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");
    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");

}

Car::Car(string b, string m)
{
    b=brand;
    m=model;
}

void Car::setEngine(int, double)
{
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::printDetails()
{
    cout<<"Auto: "<<brand<<endl;
    cout<<"Malli: "<<model<<endl;
    cout<<"Moottori: Tilavuus: "<<objEngine.getDisplacement()<<" Hevosvoimat: "<< objEngine.getHorsepower()<<endl;
    cout<<"Rengas1: "<<objWheel1.getSize()<<","<<objWheel1.getType()<<endl;
    cout<<"Rengas2: "<<objWheel2.getSize()<<","<<objWheel2.getType()<<endl;
    cout<<"Rengas3: "<<objWheel3.getSize()<<","<<objWheel3.getType()<<endl;
    cout<<"Rengas4: "<<objWheel4.getSize()<<","<<objWheel4.getType()<<endl;
}


