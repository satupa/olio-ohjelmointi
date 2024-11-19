#include "dog.h"

Dog::Dog() {}

Dog::~Dog()
{
    cout<<"Koira-olio tuhoutuu"<<endl;
}

void Dog::callOut()
{
    cout<<"Koira haukkuu!"<<endl;
}
