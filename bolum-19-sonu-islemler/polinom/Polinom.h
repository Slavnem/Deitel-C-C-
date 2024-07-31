// Slavnem @2024-07-31
// Polinom Sınıfı Tanımı
#ifndef POLINOM_H
#define POLINOM_H

// Kütüphaneler
#include <iostream>
using namespace std;

// Polinom Sınıfı
class Polinom
{
    friend ostream &operator<<(ostream &, const Polinom &);

    public:
        explicit Polinom(const int n, const int p); // kurucu
        explicit Polinom(const Polinom &); // kopya kurucu

        Polinom operator+(const Polinom &) const; // toplama
        Polinom operator-(const Polinom &) const; // çıkarma
        Polinom operator*(const Polinom &) const; // çarpma

        Polinom operator+=(const Polinom &); // üstüne ekleme
        Polinom operator*=(const Polinom &); // üstüne çarpma

    private:
        int num;
        int pow;
};

#endif