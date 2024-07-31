// Slavnem @2024-07-31
// Complex Sınıfı İşlemleri

// Kütüphaneler
#include <iostream>
#include "Complex.h"

using namespace std;

// Kurucu
Complex::Complex(double rl, double img)
    : real(rl),
    imaginary(img)
{
    // boş gövde
}

// Kopya Kurucu
Complex::Complex(const Complex &copy)
    : real(copy.real),
    imaginary(copy.imaginary)
{
    // boş gövde
}

// Toplama
Complex Complex::operator+(const Complex &operand2) const
{
    return Complex((real + operand2.real), (imaginary + operand2.imaginary));
}

// Çıkarma
Complex Complex::operator-(const Complex &operand2) const
{
    return Complex((real - operand2.real), (imaginary - operand2.imaginary));
}

// Çarpma
Complex Complex::operator*(const Complex &operand2) const
{
    return Complex((real * operand2.real), (imaginary * operand2.imaginary));
}

// Eşitlik
bool Complex::operator==(const Complex &operand2) const
{
    return ((real == operand2.real) && (imaginary == operand2.imaginary));
}

// Eşit Değildir
bool Complex::operator!=(const Complex &operand2) const
{
    return !(*this == operand2);
}

// Girdi
istream &operator>>(istream &input, Complex &c)
{
    // kullanıcıyı bilgilendir ve değerleri al
    cout << "reel ve imeginer kısımı giriniz: ";
    input >> c.real >> c.imaginary;

    // referansı döndür
    return input;
}

// Çıktı
ostream &operator<<(ostream &output, const Complex &c)
{
    // değerleri çıktı ver
    output << "Reel: " << c.real << " ve İmeginer: " << c.imaginary << endl;

    // referansı döndür
    return output;
}