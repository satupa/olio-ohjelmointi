#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef
{
private:
protected:
    string name;
public:
    Chef(string);
    Chef ();
    ~Chef();
    string chef;
    void makeSalad ();
    void makeSoup ();
    string getName() const;
    void setName(const string &newName);
};

#endif // CHEF_H
