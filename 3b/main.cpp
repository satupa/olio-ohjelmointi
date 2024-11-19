#include <iostream>
#include "animal.h"
#include "dog.h"
using namespace std;

int main()
{
    Animal objAnimal;
    objAnimal.callOut();

    Dog objDog;
    objDog.callOut();
    return 0;
}
