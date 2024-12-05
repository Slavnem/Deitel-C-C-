// Slavnem @2024-12-05 23:21 Debian 12
// Test

// Kütüphaneler
#include <iostream>
#include <memory>
using namespace std;

#include "Integer.h"

// unique_ptr'yi Integer nesneyi değiştirmek için kullan
// main
int main()
{
    cout << "Creating a unique_ptr object that points to an Integer\n";

    // unique_ptr'i Integer object olarak başlat
    unique_ptr<Integer> ptrToInteger(new Integer(7));

    cout << "\nUsing the unique_ptr to manipulate the Integer\n";
    ptrToInteger->setInteger(99); // Integer değer atamak için unique_ptr kullan

    // Integer değer almak için unique_ptr kullan
    cout << "Integer after setInteger: " << (*ptrToInteger).getInteger() << endl;
}