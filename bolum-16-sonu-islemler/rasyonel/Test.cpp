// Slavnem @2024-07-15
// Test

// Kütüphaneler
#include <iostream>
#include "Rasyonel.h"

using namespace std;

// main
int main()
{
    Rasyonel rasyo1(8);

    // sayıları çıktı verme
    cout << "Bölen: " << rasyo1.getBolen()
        << "\nBölünen: " << rasyo1.getBolunen()
        << "\nSonuç: " << rasyo1.getSonuc()
        << endl;

    // iki rasyonel sayıyı toplama
    cout << "Toplam: " << rasyo1.islemTopla()
        << "\nÇıkarma: " << rasyo1.islemCikar()
        << "\nÇarpma: " << rasyo1.islemCarp()
        << "\nBölme: " << rasyo1.islemBol()
        << endl;

    // çıktılar
    rasyo1.ciktiMatematik();
    rasyo1.ciktiOndalik();

    // yıkıcı
    rasyo1.~Rasyonel();
}