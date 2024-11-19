#include "italianchef.h"

Italianchef::Italianchef(string n) : Chef(n) {
    cout<<name<<" :n konstruktori"<<endl;
}

Italianchef::~Italianchef()
{
    cout<<name<<" :n destruktori"<<endl;
}

string Italianchef::getChefName() const
{
    string chefName = name;
    return chefName;
}



void Italianchef::makePasta()
{
    cout << name << " is making pasta"<<endl;
}
