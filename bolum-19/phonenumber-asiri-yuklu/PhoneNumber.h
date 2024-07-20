// Slavnem @2024-07-21
// PhoneNumber Sınıf Tanımı

#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>

using namespace std;

class PhoneNumber
{
        friend ostream &operator<<(ostream &, const PhoneNumber &);
        friend istream &operator>>(istream &, PhoneNumber &);
    private:
        string areaCode; // 3 arakm operatör kodu
        string exchange; // 3 rakam alan kodu
        string line; // 4 rakam abone kodu
};

#endif