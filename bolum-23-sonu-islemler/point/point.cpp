// Slavnem @2024-11-29 22:34 Debian 12
// Point

// Kütüphaneler
#include <iostream>
#include "point.hpp"

using namespace std;

// main
int main()
{
    Point testpoint(3, 6); // test amaçlı obje

    // kordinat verisi girilsin
    cout << "X ve Y kordinatları için veri giriniz: ";
    cin >> testpoint;

    // çıktı versin
    cout << testpoint;

    return 0;
}