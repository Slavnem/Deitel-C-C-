// Slavnem @2024-07-31
// Polinom Sınıfı İşlemleri

// Kütüphaneler
#include <iostream>
#include "Polinom.h"

using namespace std;

// Kurucu
Polinom::Polinom(const int nm, const int pw)
{
    if(nm < 1) throw invalid_argument("Taban İçin Geçersiz Sayı Girdiniz");
    if(pw < 0) throw invalid_argument("Üst İçin Geçersiz Sayı Girdiniz");

    num = nm; // taban
    pow = pw; // üst
}

// Kopya Kurucu
Polinom::Polinom(const Polinom &p)
    : num(p.num),
    pow(p.pow)
{
    // boş gövde
}

// Toplama
Polinom Polinom::operator+(const Polinom &p) const
{
    return Polinom((num + p.num), (pow + p.pow));
}

// Çıkarma
Polinom Polinom::operator-(const Polinom &p) const
{
    return Polinom((num - p.num), (pow - p.pow));
}

// Çarpma
Polinom Polinom::operator*(const Polinom &p) const
{
    return Polinom((num * p.num), (pow * p.pow));
}

// Üstüne Ekleme
Polinom Polinom::operator+=(const Polinom &p)
{
    num += p.num; // taban ekleme
    pow += p.pow; // üst ekleme

    return Polinom(num, pow);
}

// Üstüne Çarpma
Polinom Polinom::operator*=(const Polinom &p)
{
    num *= p.num; // taban çarpma
    pow *= p.pow; // üst çarpma

    return Polinom(num, pow);
}

// Çıktı Vermek
ostream &operator<<(ostream &output, const Polinom &p)
{
    cout << p.num << " üssü " << p.pow << endl;
    return output;
}