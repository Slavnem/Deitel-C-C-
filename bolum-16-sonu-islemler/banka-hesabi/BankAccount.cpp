// Slavnem @2024-07-12
// Banka Hesabını Sınıfı İşlemleri

// Kütüphaneler
#include <iostream>
#include "BankAccount.h"

using namespace std;

// Sınıf Oluşturma Tanımlama
BankAccount::BankAccount(int para)
{
    // para eksilerde ise
    if(para < 0)
    {
        cout << "\n* Hatali bir baslangic bakiyesi girdiniz *" << endl;
        return;
    }

    paraYatir(para);
}

// Para Yatırma
void BankAccount::paraYatir(int para)
{
    // kontrol etsin
    if(para < 0)
        cout << "\n* Hatali bir bakiye girdiniz *" << endl;

    // bakiyeyi ayarlasın
    bakiye = (para > 0) ? para : 0;
}

// Para Çekme
void BankAccount::paraCek(int para)
{
    // mevcut miktardan fazla ise
    if(para > bakiye)
    {
        cout << "\n* Mevcut Bakiyeden (" << bakiye << ") Fazla Miktar Girdiniz *" << endl;
        return;
    }
    // geçersiz bir miktar ise
    else if(para <= 0)
    {
        cout << "\n* Gecersiz Para Cekme Miktari (" << para << ") Girdiniz *" << endl;
        return;
    }

    // parayı başarıyla çeksin
    bakiye -= para;
}

// Para Bilgisini Getirsin
int BankAccount::getBakiye()
{
    return bakiye;
}