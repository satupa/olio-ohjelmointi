#include <iostream>
#include "classb.h"
#include "assosiationa.h"
#include "aggregationa.h"
using namespace std;

int main()
{
    int a = 5;
    int *myPointer = &a;
    int &refA= a;
    int b = 10;
    int *pointer = &b;

    cout<<"a:n arvo: "<< a << " ja osoite: " << &a << endl;
    cout<<"b:n arvo: "<< b << " ja osoite: " << &b << endl;

    cout<<"Pointterin osoittama osoite on: "<< myPointer << " ja muistipaikan arvo: " << *myPointer << endl;
    cout<<"Pointterin osoittama osoite on: "<< pointer << " ja muistipaikan arvo: " << *pointer << endl;

    cout<<"refA osoittaa osoitteeseen: "<< &refA << " ja muistipaikan arvo: " << refA << endl;

    cout << "********************"<<endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;

    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB= objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;

    return 0;
}
