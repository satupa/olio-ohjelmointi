#include <iostream>
#include <vector>
#include "car.h"
using namespace std;

int main()
{
    vector<Car> carList;
    Car objCar_0=Car("Volswagen", "Passat",2017);
    Car objCar_1=Car("Skoda", "Octavia",2012);
    Car objCar_2=Car("Volswagen", "Golf",2009);

    carList.push_back(objCar_0);
    carList.push_back(objCar_1);
    carList.push_back(objCar_2);

    carList[1].printData();

    cout<<"Kaikki autot:"<<endl;
    for (int i=0; i<=2; i++){
        carList[i].printData();
    }
    return 0;
}
