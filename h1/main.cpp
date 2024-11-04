#include "funktiot.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    //Vaihe 1
    int a;
    int b;
    cout<<"Anna luku a"<< endl;
    cin>>a;
    cout<<"Anna luku b"<< endl;
    cin>>b;
    calcSum(a, b);


    //Vaihe2
    int c;
    int d;
    cout<<"Anna luku c"<< endl;
    cin>>c;
    cout<<"Anna luku d"<< endl;
    cin>>d;
    if (d == 0) {
        cout<<"Error"<<endl;
    }
    else { calcDiv(c, d);}


    //Vaihe 3
  int e;
  int f;
  cout<<"Anna luku e"<< endl;
  cin>>e;
  cout<<"Anna luku f"<< endl;
  cin>>f;
  return e + f;

  int g;
  int h;
  cout<<"Anna luku g"<< endl;
  cin>>g;
  cout<<"Anna luku h"<< endl;
  cin>>h;
  if (h == 0) {
      cout<<"Error"<<endl;
      return 0;
  }
  else { return g/h;}


  return 0; }
