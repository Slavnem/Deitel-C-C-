// Slavnem @2024-06-28
// Referans Değişkeni Değer Atama ve Kullanma

// Kütüphaneler
#include <iostream>

// Kullanımlar
using namespace std;

// main
int main()
{
    int x = 3;
    int &y = x; // y, x'e referanstır (x için bir takma addır)

    cout << "x = " << x << endl << "y = " << y << endl;
    y = 7; // aslında x üzerinde değişkilik yapar
    cout << "x = " << x << endl << "y = " << y << endl;
}