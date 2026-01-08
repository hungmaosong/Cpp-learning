#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>
using namespace std;

class PhoneNumber
{
private:
    string areaCode;
    string exchangeNum;
    string serialNum;
public:

    friend ostream &operator <<(ostream &, const PhoneNumber &);
    friend istream &operator >>(istream &, PhoneNumber &);
};


#endif