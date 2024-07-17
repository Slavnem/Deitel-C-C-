// Slavnem @2024-07-12
// Personel Sınıfı İşlemleri

// Kütüphaneler
#include "Personel.h"

// Sınıf Başlangıcı
Personel::Personel(string isim, string soyisim, int ucret)
{
    setAd(isim);
    setSoyad(soyisim);
    setMaas(ucret);
}

// İsim Ayarlama
void Personel::setAd(string isim)
{
    // belirli uzunlukta ise
    if(isim.length() > 0)
        ad = isim;
}

// Soyisim Ayarlama
void Personel::setSoyad(string soyisim)
{
    // belirli uzunlukta ise
    if(soyisim.length() > 0)
        soyad = soyisim;
}

// Maaş Ayarlama
void Personel::setMaas(int ucret)
{
    // geçerli bir fiyata sahip ise
    maas = (ucret > 0) ? ucret : 0;
}

// İsim Getirme
string Personel::getAd()
{
    return ad;
}

// Soyisim Getirme
string Personel::getSoyad()
{
    return soyad;
}

// Maaş Getirme
int Personel::getMaas()
{
    return maas;
}