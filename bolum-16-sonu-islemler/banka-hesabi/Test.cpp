// Slavnem @2024-07-12
// Test

// Kütüphaneler
#include <iostream>
#include "BankAccount.h"

using namespace std;

// main
int main()
{
    BankAccount testAccount1(-324); // geçersiz değer vererek başaltıyoruz
    BankAccount testAccount2(450); // sorunsuz değer

    // ikinci hesaptan para çeksin
    testAccount2.paraYatir(-23); // geçersiz para yatırma miktarı
    testAccount2.paraCek(890); // geçersiz miktarda para çeksin

    // ilk hesaba para yatır
    testAccount1.paraYatir(682); // geçerli bir miktar

    // hesap bakiyelerini çıktı verme
    cout << "Test Hesap 1 Bakiyesi: " << testAccount1.getBakiye() << endl;
    cout << "Test Hesap 2 Bakiyesi: " << testAccount2.getBakiye() << endl;
}