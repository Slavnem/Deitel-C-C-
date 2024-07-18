// Slavnem @2024-07-18
// Test

// Kütüphaneler
#include <iostream>
#include "Time.h"

using namespace std;

// main
int main()
{
    Time t; // Time nesnesi oluştur

    // ardışık fonksiyon çağrıları
    t.setHour(18).setMinute(30).setSecond(22);

    // zamanı evrensel ve standart biçimlerde göster
    cout << "Evrensel Zaman: ";
    t.printUniversal();

    cout << "\nStandart Zaman: ";
    t.printStandard();

    cout << "\n\nYeni Standart Zaman: ";

    // ardışık fonksiyon çağrıları
    t.setTime(20, 20, 20).printStandard();
    cout << endl;
}