// Slavnem @2024-07-17
// Date Sınıfı İşleyicileri

// Kütüphaneler
#include <iostream>
#include <stdexcept>
#include "Date.h"

using namespace std;

// ay için ugun değeri onaylayan yapıcı,
// gün için uygun değeri onaylamak üzere
// checkDay yardımcı fonksiyonunu çağırır
Date::Date(int mn, int dy, int yr)
{
    if(mn < 0 || mn > monthsPerYear) // ay bilgisini doğrula
        throw invalid_argument("* Ay 1-12 Olabilir *");
        
    // ay bilgisini ayarla
    month = mn;

    // yıl bilgisini doğrula
    if(yr < 1900 || yr > 2024)
        throw invalid_argument("* Yıl 1900-2024 Olabilir *");

    // yıl bilgisini ayarla
    year = yr;

    // günü doğrula
    day = checkDay(dy);

    // yapıcı çağırıldığında Date nesnesini görüntüle
    cout << "date için Date kurucu nesnesi ";
    print();
    cout << endl;
}

// Date nesnesini ay/gün/yıl biçiminde yazdır
void Date::print() const
{
    cout << month << '/' << day << '/' << year;
}

// Yıkıcı çağırıldığında tarihi görüntüle
Date::~Date()
{
    cout << "date için Date yıkıcı nesnesi ";
    print();
    cout << endl;
}

// ay ve yıla dayalı olarak uygun günü onaylayan
// yardımcı fonksiyon artık yılında göz önüne alır
int Date::checkDay(int testDay) const
{
    // hangi aylarda kaç gün olduğu
    static const int daysPerMonth[monthsPerYear + 1] =
    {
        0, 31, 28, 31, 30, 31, 31, 30, 31, 30, 31
    };

    // testDay'in belirtilen ay için geçerliliğini doğrular
    if(testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;

    // artık yıl hesabı için Şubat 29 kontrolü
    if(month == 2 && testDay == 29 &&
        (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
    {
        return testDay;
    }

    throw invalid_argument("Şuan ki Ay ve Yıl İçin Geçersiz Gün");
}