#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class Italianchef : public Chef
{
private:
protected:
public:
    Italianchef(string);
    ~Italianchef();
    string chefName;
    void makePasta ();
    string getChefName() const;
    void setChefName(const string &newChefName);
};

#endif // ITALIANCHEF_H
