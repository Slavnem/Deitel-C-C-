// Slavnem @2024-07-13
// Test

// Kütüphaneler
#include "KalpHizi.h"

// main
int main()
{
    // örnek bir nesne
    KalpHizi kalpHizi1("Test","Soy",0,23,1999);

    // kullanıcının bilgilerini çıktı verme
    cout << "Ad: " << kalpHizi1.getAd()
        << "\nSoyad: " << kalpHizi1.getSoyad()
        << "\nDogum: ";

    // doğum tarihi
    kalpHizi1.getDogum();

    cout << "En Yuksek Kalp Hizi: " << kalpHizi1.getMaxKalpHizi()
        << "\nHedef Kalp Hizi: " << kalpHizi1.getHedefKalpHizi()
        << endl;
}