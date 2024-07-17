// Slavnem @2024-07-14
// Time Sınıfı İşleyicisi

// Kütüphaneler
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;

// Zaman kurucusu her veri üyesini 0'la başlatır
Time::Time(int hour, int minute, int second)
{
    setTime(hour, minute, second); // saati kur ve doğrula
}

// evrensel zamanı kullanarak yeni Time değerini ayarlama
void Time::setTime(int h, int m, int s)
{
    setHour(h); // özel private saati ayarlama
    setMinute(m); // özel private dakikayı ayarlama
    setSecond(s); // özel private saniyeyi ayarlama
}

// saat değerini ayarlama
void Time::setHour(int h)
{
    if(h >= 0 && h < 24)
        hour = h;
    else
        throw invalid_argument("saat 0-23 olmalı");
}

// dakika değerini ayarlama
void Time::setMinute(int m)
{
    if(m >= 0 && m < 60)
        minute = m;
    else
        throw invalid_argument("dakika 0-59 olmalı");
}

// saniye değerini ayarlama
void Time::setSecond(int s)
{
    if(s >= 0 && s < 60)
        second = s;
    else
        throw invalid_argument("saniye 0-59 olmalı");
}

// saat değerini getirme
int Time::getHour()
{
    return hour;
}

// dakika değerini getirme
int Time::getMinute()
{
    return minute;
}

// saniye değerini getirme
int Time::getSecond()
{
    return second;
}

// evrensel zaman biçiminde saati yazdırmak
void Time::printUniversal()
{
    cout << setfill('0') << setw(2) << getHour() << ":"
        << setw(2) << getMinute() << ":"
        << setw(2) << getSecond() << (hour < 12 ? " AM" : " PM");
}

// standart zaman biçiminde saati yazdırmak
void Time::printStandard()
{
    cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
        << ":" << setfill('0') << setw(2) << getMinute()
        << ":" << setw(2) << getSecond() << (hour < 12 ? " AM" : " PM");
}