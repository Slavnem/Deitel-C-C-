// Slavnem @2024-07-31
// Complex Sınıfı Tanımı
#ifndef COMPLEX_H
#define COMPLEX_H

// Kütüphaneler
#include <iostream>
using namespace std;

// Complex Sınıfı
class Complex
{
    friend istream &operator>>(istream &, Complex &);
    friend ostream &operator<<(ostream &, const Complex &);

    public:
        explicit Complex(double = 0.0, double = 0.0); // kurucu
        explicit Complex(const Complex &); // kopya kurucu

        Complex operator+(const Complex &) const; // toplama
        Complex operator-(const Complex &) const; // çıkarma
        Complex operator*(const Complex &) const; // çarpma
        
        bool operator==(const Complex &) const; // eşittir
        bool operator!=(const Complex &) const; // eşit değildir

    private:
        double real; // reel kısım
        double imaginary; // sanal kısım
};

#endif