// Slavnem @2024-07-29
// Aşırı yüklü artırım operatörlü Date sınıfı tanımı
#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date
{
    friend ostream &operator<<(ostream &, const Date &);
    public:
        Date(int m = 1, int d = 1, int y = 1900); // varsayılan kurucu
        void setDate(int, int, int); // yıl, ay ve gün'ün kurulması
        Date &operator++(); // ön ek artırım operatörü
        Date operator++(int); // son ek artırım operatörü
        const Date &operator+=(int); // günleri topla, nesneyi değiştir
        static bool leapYear(int); // Artık yıl sorgusu
        bool endOfMonth(int) const; // Ayın son günü sorgusu
    private:
        int month;
        int day;
        int year;

        static const int days[]; // aydaki günler
        void helpIncrement(); // tarih arttırma
};

#endif