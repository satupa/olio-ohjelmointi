#include "exampleclass.h"
#include <iostream>

ExampleClass::ExampleClass(QObject *parent)
    : QObject{parent}
{
    qDebug()<<"Start";
    // yritin tehdä alla olevan rivin luennon ja nettisivun esimerkin perusteella,
    // mutta sain jatkuvasti virheitä "Cannot take the address of an rvalue of type 'void'"
    // ja "No matching member function for call to 'connect'"
    // tällä sain ongelman ratkaistua
    QObject::connect(this, &ExampleClass::readyToSay, this, &ExampleClass::sayHelloSlot );
        qDebug()<<"End";
}

ExampleClass::~ExampleClass()
{
    qDebug()<<"Destructor";
}

void ExampleClass::startToWait()
{
    QThread::msleep(1000);
    emit readyToSay();
}

void ExampleClass::sayHelloSlot()
{
     qDebug()<<"Terve";
}
