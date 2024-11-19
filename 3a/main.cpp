#include <iostream>
#include <italianchef.h>
#include "chef.h"

using namespace std;

int main()
{
    Chef objChef("Gordon Ramsay");
    objChef.makeSalad();
    objChef.makeSoup();
    cout<<endl;

    Italianchef objItalianchef("Anthony Bourdain");
    objItalianchef.makeSalad();
    objItalianchef.makeSoup();
    objItalianchef.makePasta();
    cout<<"Kokin nimi on "<<objItalianchef.getChefName()<<endl;
    return 0;
}
