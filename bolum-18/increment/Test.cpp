// Slavnem @2024-07-17
// Test

// Kütüphaneler
#include <iostream>
#include "Increment.h"

using namespace std;

// main
int main()
{
    Increment value(10, 5);

    cout << "Arttırımdan önce: ";
    value.print();

    for(int j = 1; j <= 3; ++j)
    {
        value.addIncrement();
        cout << j << "." << "Arttırımdan sonra: ";
        value.print();
    }
}