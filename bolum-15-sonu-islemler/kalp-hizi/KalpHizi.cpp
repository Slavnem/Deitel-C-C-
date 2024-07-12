// Slavnem @2024-07-12
// Kalp Hızı Sınıfı İşleyicileri

// Kütüphaneler
#include "KalpHizi.h"

// Kalp Hızı Sınıf Başlangıcı
KalpHizi::KalpHizi(string isim, string soyisim, int ay, int gun, int yil)
{
    setAd(isim);
    setSoyad(soyisim);
    setDogum(ay, gun, yil);
}

// Ad Ayarlama
void KalpHizi::setAd(string isim)
{
    if(isim.length() > 0)
        ad = isim;
}

// Soyad Ayarlama
void KalpHizi::setSoyad(string soyisim)
{
    if(soyisim.length() > 0)
        soyad = soyisim;
}

// Doğum Tarihi Ayarlama
void KalpHizi::setDogum(int iAy, int iGun, int iYil)
{
    ay = (iAy > 0 && iAy < 13) ? iAy : 1;
    gun = (iGun > 0 && iGun < 32) ? iGun : 1;
    yil = (iYil > 1899 && iYil < 2024) ? iYil : 2020;
}

// Ad Getirme
string KalpHizi::getAd()
{
    return ad;
}

// Soyad Getirme
string KalpHizi::getSoyad()
{
    return soyad;
}

// Doğum Tarihi Getirme
void KalpHizi::getDogum()
{
    cout << ay << "/" << gun << "/" << yil << endl;
}

// Yaş Bilgisini Getirme
int KalpHizi::getYas()
{
    return (2024 - yil);
}

// En Yüksek Kalp Hızını Getirme
int KalpHizi::getMaxKalpHizi()
{
    return (220 - getYas());
}

// Hedef Kalp Hızını Getirme
int KalpHizi::getHedefKalpHizi()
{
    return (int)(getMaxKalpHizi() * 0.65);
}