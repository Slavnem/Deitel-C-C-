// Slavnem @2024-07-16
// TimeTick Sınıfı İşleyicileri

// Kütüphaneler
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "TimeTick.h"

using namespace std;

// Kurucu
TimeTick::TimeTick(int h, int m, int s)
{
    // değerleri ayarlama
    setHour(h);
    setMinute(m);
    setSecond(s);
}

// Yıkıcı
TimeTick::~TimeTick()
{
    // son durum çıktısı
    cout << "\n* Son Durum *" << endl;
    printUniversal();
}

// NOT:
/*
    süre ayarlarken hata
    fırlatmasını sağlamadan mod ile de
    yapabilirdik fakat böylesi daha iyi
    çünkü kullanıcı hatayı anlamış olur
*/

// Saat Ayarlama
void TimeTick::setHour(int h)
{
    // geçerli süre kontrolü
    if(h < 0 || h > 23)
        throw invalid_argument("\n* Geçersiz Saat Girdiniz. 0-23 Arası Olmalı *\n");

    // saati ayarla
    hour = h;
}

// Dakika Ayarlama
void TimeTick::setMinute(int m)
{
    // geçerli süre kontrolü
    if(m < 0 || m > 59)
        throw invalid_argument("\n* Geçersiz Dakika Girdiniz. 0-59 Arası Olmalı *\n");

    // dakikayı ayarla
    minute = m;
}

// Dakika Ayarlama
void TimeTick::setSecond(int s)
{
    // geçerli süre kontrolü
    if(s < 0 || s > 59)
        throw invalid_argument("\n* Geçersiz Saniye Girdiniz. 0-59 Arası Olmalı *\n");

    // saniyeyi ayarla
    second = s;
}

// Saat Getirme
int TimeTick::getHour()
{
    return hour;
}

// Dakika Getirme
int TimeTick::getMinute()
{
    return minute;
}

// Saniye Getirme
int TimeTick::getSecond()
{
    return second;
}

// Tick İle Süre Arttırma
void TimeTick::tick()
{
    // saniye kontrolü
    if(second < 59)
    {
        second++;
        return;
    }

    // saniyeyi sıfırlasın
    second = 0;

    // dakikayı kontrol etsin
    if(minute < 59)
    {
        minute++;
        return;
    }

    // dakikayı sıfırlasın
    minute = 0;
    
    // saati kontrol etsin
    if(hour < 23)
    {
        hour++;
        return;
    }

    // saati sıfırlasın
    hour = 0;
}

// Küresel Standarta Göre Çıktı
void TimeTick::printUniversal()
{
    cout << setfill('0')
        << setw(2) << getHour() << ":"
        << setw(2) << getMinute() << ":"
        << setw(2) << getSecond()
        << ((hour < 12) ? " AM" : " PM")
        << " [Küresel]"
        << endl;
}

// Normal Standarta Göre Çıktı
void TimeTick::printStandard()
{
    cout << ((hour % 12) != 0 ? hour : 12) << ":"
        << setfill('0')
        << setw(2) << getMinute() << ":"
        << setw(2) << getSecond()
        << ((hour < 12) ? " AM" : " PM")
        << " [Standart]"
        << endl;
}