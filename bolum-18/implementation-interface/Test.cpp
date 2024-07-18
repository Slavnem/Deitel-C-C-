// Slavnem @2024-07-18
// Test

// Kütüphaneler
#include <iostream>
#include "Interface.h"

using namespace std;

// main
int main()
{
    Interface i(5); // Interface nesnesi oluştur

    cout << "Interface değeri ayarlanmadan önceki hali: " << i.getValue() << endl;

    i.setValue(10);

    cout << "Interface değeri ayarlandıktan sonraki hali: " << i.getValue() << endl;
}