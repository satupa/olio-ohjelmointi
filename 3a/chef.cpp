#include "chef.h"


Chef::Chef(string n){
    name = n;
    cout <<name << " :n konstruktori"<<endl;
}

Chef::Chef()
{

}

Chef::~Chef()
{
    cout << name << " :n destruktori"<<endl;
}

void Chef::makeSalad()
{
    cout<< name << " is making salad"<<endl;
}

void Chef::makeSoup()
{
    cout<< name << " is making soup"<<endl;
}
