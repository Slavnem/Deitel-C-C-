// Slavnem @2024-07-12
// Tarih Sınıf İşleyicileri

// Kütüphaneler
#include "Tarih.h"

// Sınıf başlangıcı
Tarih::Tarih(int iAy, int iGun, int iYil)
{
    setAy(iAy);
    setGun(iGun);
    setYil(iYil);
}

// Ay Ayarlama
void Tarih::setAy(int iAy)
{
    // 1 ile 12 arasında olabilir ancak
    ay = (iAy > 0 && iAy < 13) ? iAy : 1;
}

// Gün Ayarlama
void Tarih::setGun(int iGun)
{
    // 1 ile 31 arasında olmalıdır
    // şubat ayı vs için gün ayarlamaları yapılabilir
    // fakat bu soru çözümü için önemli değil
    gun = (iGun > 0 && iGun < 32) ? iGun : 1;
}

// Yıl Ayarlama
void Tarih::setYil(int iYil)
{
    // en az 1900, en fazla 2024
    yil = (iYil > 1899 && iYil < 2025) ? iYil : 2024;
}

// Ay Getirme
int Tarih::getAy()
{
    return ay;
}

// Gün Getirme
int Tarih::getGun()
{
    return gun;
}

// Yıl Getirme
int Tarih::getYil()
{
    return yil;
}

// Tarihi Gösterme
void Tarih::displayDate()
{
    cout << ay << "/" << gun << "/" << yil << endl;
}