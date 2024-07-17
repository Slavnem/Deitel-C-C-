// Slavnem @2024-07-17
// Increment Sınıfı İşleyicileri

// Kütüphaneler
#include <iostream>
#include "Increment.h"

using namespace std;

// kurucu
Increment::Increment(int c, int i)
    : count(c), // const suz sayaçın başlatılması
    increment(i) // const üye için gekerli başlatıcısı
{
    // boş gövde
}

// sayaçı ve değeri çıktı ver
void Increment::print() const
{
    cout << "Sayı = " << count << ", Artırım = " << increment << endl;
}