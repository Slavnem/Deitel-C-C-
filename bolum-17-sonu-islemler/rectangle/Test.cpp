// Slavnem @2024-07-16
// Test

// Kütüphaneler
#include <iostream>
#include "Rectangle.h"

using namespace std;

// main
int main()
{
    // sadece uzunluk verip genişliği
    // otomatik vermesini sağlıyoruz
    Rectangle rectang1(3.7);

    // Değerleri çıktı vermek
    cout << "Uzunluk: " << rectang1.getLength()
        << "\nGenişlik: " << rectang1.getWidth()
        << endl;

    // çevreyi hesaplatıp çıktı vermek
    cout << "Çevre: " << rectang1.calcCevre()
        << "\nAlan: " << rectang1.calcAlan()
        << endl;
}