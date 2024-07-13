// Slavnem @20240-07-13
// Time Sınıfı İşlemleri

// Kütüphaneler
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;

// Time kurucu her veri üyesini sıfırla başlatır
Time::Time()
{
    hour = minute = second = 0;
}

// evrensel zamanı kullanarak yeni Time değerini getirme
void Time::setTime(int h, int m, int s)
{
    // saat, dakika ve saniye geçerli yapma
    if((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60))
    {
        hour = h;
        minute = m;
        second = s;
    }
    else
        throw invalid_argument("saat, dakika ve/veya saniye aralık dışında");
}

// evrensel-zaman biçiminde zamanı yazdırma (HH: MM: SS)
void Time::printUniversal()
{
    cout << setfill('0') << setw(2) << hour << ":"
        << setw(2) << minute << ":" << setw(2) << second;
}

// standart-zaman biçiminde (HH:MM:SS AM veya PM) zamano yazdırma
void Time::printStandard()
{
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
        << setfill('0') << setw(2) << minute << ":" << setw(2)
        << second << (hour < 12 ? " AM" : " PM");
}