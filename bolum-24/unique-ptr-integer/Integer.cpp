// Slavnem @2024-12-05 23:18 Debian 12
// Integer C++

// Kütüphaneler
#include <iostream>
#include "Integer.h"

using namespace std;

// varsayılan kurucu
Integer::Integer(int i)
    : value(i)
{
    cout << "Constructor for Integer " << value << endl;
}

// varsayılan yıkıcı
Integer::~Integer()
{
    cout << "Destructor for Integer " << value << endl;
}

// atama
void Integer::setInteger(int i)
{
    value = i;
}

// döndürme
int Integer::getInteger() const
{
    return value;
}