// Slavnem @2024-07-31
// Test

// Kütüphaneler
#include <iostream>
#include "Complex.h"

using namespace std;

// main
int main()
{
    Complex x;
    Complex y(4.3, 8.2);
    Complex z(y);

    cout << "x için reel ve imaginer kısım değeri giriniz:";
    cin >> x;

    cout << "\nx: " << x
        << "y: " << y
        << "z: " << z
        << endl;

    cout << "y + z eşittir " << (y + z)
        << "x == y eşittir " << ((x == y) ? "evet" : "hayır")
        << "y != x eşittir " << ((y != x) ? "evet" : "hayır")
        << endl;

    cout << "\nx * z eşittir " << (x * z)
        << "y - x eşittir " << (y - x)
        << "x + y eşittir " << (x + y)
        << endl;
}