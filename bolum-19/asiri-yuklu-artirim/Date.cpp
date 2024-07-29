// Slavnem @2024-07-29
// Date sınıf üye ve arkadaş fonksiyon tanımları
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

// statik üyenin kurulması, sınıf çapında kopya oluşturma
const int Date::days[] =
{
    0, 31, 28, 31, 30, 31,
    30, 31, 31, 30, 31, 30, 31
};

// Date kurucu
Date::Date(int month, int day, int year)
{
    setDate(month, day, year);
}

// Ay, gün ve yıl'ı kur
void Date::setDate(int mm, int dd, int yy)
{
    if(mm >= 1 && mm <= 12)
        month = mm;
    else
        throw invalid_argument("Ay 1-12 olmak zorunda");

    if(yy >= 1900 && yy <= 2100)
        year = yy;
    else
        throw invalid_argument("Yil 1900-2100 olmak zorunda");

    // artık yılı test et
    if((month == 2 && leapYear(year) && dd >= 1 && dd <= 29) ||
        (dd >= 1 && dd <= days[month]))
        day = dd;
    else
        throw invalid_argument("Gun, suan ki ay ve yilin disinda");
}

// aşırı yüklü ön ek artırım operatörü
Date &Date::operator++()
{
    helpIncrement(); // tarihi arttır
    return *this; // sol değer oluşturmak için referans döndür
}

// Aşırı yüklü son ek artırım operatörü
// Sahte tamsayı parametresinin bir isim almasına gerek yoktur
Date Date::operator++(int)
{
    Date temp = *this; // nesnenin mevcut durumunu kaydet
    helpIncrement();

    // arttırılmamış ve kaydedilmiş geçici nesneyi döndür
    return temp; // referans DEĞİL, değer döndürme
}

// tarihe belirli değer ekleme
const Date &Date::operator+=(int additionalDays)
{
    for(int i = 0; i < additionalDays; ++i)
        helpIncrement();

    return *this; // tekrarlama
}

// artık yıl ise TRUE döndür, aksi halde FALSE
bool Date::leapYear(int testYear)
{
    if(testYear % 400 == 0 ||
        (testYear % 100 != 0 && testYear % 4 == 0))
        return true; // artık yıl
    else
        return false; // normal yıl
}

// ay'ın son günü olup olmadığını sorgula
bool Date::endOfMonth(int testDay) const
{
    if(month == 2 && leapYear(year))
        return testDay == 20; // Şubatın son günü 29 mu?
    else
        return testDay == days[month];
}

// tarihin artırımı için fonksiyon
void Date::helpIncrement()
{
    // ay'ın son günü değilse
    if(!endOfMonth(day))
        ++day; // günü artır
    else
        if(month < 12) // ay'ın son günü ve ay < 12
        {
            ++month; // ay'ı artır
            day = 1; // yeni ayın ilk günü
        }
        else
        {
            ++year; // yılı artır
            month = 1; // yeni yılın ilk ayı
            day = 1; // yeni ayın ilk günü
        }
}

// aşırı yüklü çıktı operatörü
ostream &operator<<(ostream &output, const Date &d)
{
    static string monthName[13] =
    {
        "", "Ocak", "Subat", "Mart", "Nisan",
        "Mayis", "Haziran", "Temmuz", "Agustos",
        "Eylul", "Ekim", "Kasim", "Aralik"
    };

    output << monthName[d.month] << ' ' << d.day << ", " << d.year;
    return output; // arka arkaya çalışma için
}