// Slavnem @2024-07-15
// Rasyonel Sınıfı İşleyicileri

// Kütüphaneler
#include <iostream>
#include <stdexcept>
#include "Rasyonel.h"

using namespace std;

// Kurucu
Rasyonel::Rasyonel(int bolen, int bolunen)
{
    setBolen(bolen);
    setBolunen(bolunen);
    
    sonuc = 0;
}

// Yıkıcı
Rasyonel::~Rasyonel()
{
    // yıkıcı çalışmadan önce son çıktı
    cout << "\nSon Durum:"
        << "\nBölen: " << getBolen()
        << "\nBölünen: " << getBolunen()
        << "\nSonuç: " << getSonuc()
        << endl;
}

// Bolen
void Rasyonel::setBolen(int b)
{
    bolen = (b > -1) ? b : 2;
}

// Bolunen
void Rasyonel::setBolunen(int b)
{
    bolunen = (b > 0) ? b : 1;
}

// Get Bolen
int Rasyonel::getBolen()
{
    return bolen;
}

// Get Bolunen
int Rasyonel::getBolunen()
{
    return bolunen;
}

// Get Sonuc
double Rasyonel::getSonuc()
{
    return sonuc;
}

// İslem Topla
int Rasyonel::islemTopla()
{
    return (sonuc = bolen + bolunen);
}

// İslem Cikar
int Rasyonel::islemCikar()
{
    return (sonuc = bolen - bolunen);
}

// İslem Çarp
int Rasyonel::islemCarp()
{
    return (sonuc = bolen * bolunen);
}

// İslem Böl
double Rasyonel::islemBol()
{
    // bölme işlemi için sadece pozitif değerler geçerli sayılıyor
    // değerleri kontrol etsin ve ona göre hata döndürsün
    if(bolen < 0 || bolunen < 1)
        throw invalid_argument("\n* Geçersiz Bölen ya da Bölünen Değeri *\n");

    // bölme için sayı kontrolleri ile işlem
    return (sonuc = (bolen > -1 ? bolen : 0) / (bolunen > 0 ? bolunen : 1));   
}

// Çıktı Matematik
void Rasyonel::ciktiMatematik()
{
    cout << "Çıktı: " << getBolunen() << "/" << getBolen() << endl; 
}

// Çıktı Ondalıklı
void Rasyonel::ciktiOndalik()
{
    cout << "Çıktı: " << getSonuc() << endl;
}