// Slavnem @2024-07-18
// Time Sınıfı İşleyicileri

// Kütüphaneler
#include <iostream>
#include <iomanip>
#include "Time.h"

using namespace std;

// private verileri ilklendirmek için yapıcı fonksiyon,
// değişkenleri ayarlamak için setTime üye fonksiyonu çağırır
// varsayılan değerler 0'dır
Time::Time(int hr, int min, int sec)
{
    setTime(hr, min, sec);
}

// saat, dakika ve saniye değerlerini ayarla
// Time & geri dönüş tipinde
Time &Time::setTime(int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);

    return *this; // ardışık çağrıya imkan verir
}

// saati ayarla
Time &Time::setHour(int h)
{
    if(h >= 0 && h < 24)
        hour = h;
    else
        throw invalid_argument("* Saat, 0-23 Arası Olmak Zorunda *");

    return *this;
}

// dakikayı ayarla
Time &Time::setMinute(int m)
{
    if(m >= 0 && m < 60)
        minute = m;
    else
        throw invalid_argument("* Dakika, 0-59 Arası Olmak Zorunda *");

    return *this;
}

// saniyeyi ayarla
Time &Time::setSecond(int s)
{
    if(s >= 0 && s < 60)
        second = s;
    else
        throw invalid_argument("* Saniye, 0-59 Arası Olmak Zorunda *");

    return *this;
}

// saat değerini döndür
int Time::getHour() const
{
    return hour;
}

// dakika değerini döndür
int Time::getMinute() const
{
    return minute;
}

// saniye değerini döndür
int Time::getSecond() const
{
    return second;
}

// Time değerini evrensel zaman biçiminde (HH:MM:SS) yazdır
void Time::printUniversal() const
{
    cout << setfill('0') << setw(2) << hour << ":"
        << setw(2) << minute << ":" << setw(2) << second;
}

// Time değerini standart zaman biçiminde (HH:MM:SS AM ya da PM) yazdır
void Time::printStandard() const
{
    cout << ((hour % 12 == 0) ? 12 : hour % 12)
        << ":" << setfill('0') << setw(2) << minute
        << ":" << setw(2) << second << (hour < 12 ? " AM" : " PM");
}