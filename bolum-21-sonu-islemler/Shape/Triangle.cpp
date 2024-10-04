// Slavnem @2024-10-04
// Triangle Sınıfı Fonksiyonlar

// Kütüphaneler
#include <iostream>
#include "Triangle.h"

// Kurucu
Triangle::Triangle(const double argLength, const double argHeight)
{
    setLength(argLength);
    setHeight(argHeight);
}

// Taban Uzunluğu Değerini Ata
void Triangle::setLength(const double argLength)
{
    if(argLength < 1.0)
        throw std::invalid_argument("Üçgen Taban Uzunluğu En Az 1.0 Olabilir");

    length = argLength;
}

// Taban Uzunluğu Değerini Döndür
double Triangle::getLength() const
{
    return length;
}

// Yükseklik Değerini Ata
void Triangle::setHeight(const double argHeight)
{
    if(argHeight < 1.0)
        throw std::invalid_argument("Üçgen Yüksekliği En Az 1.0 Olabilir");

    height = argHeight;
}

// Yükseklik Değerini Döndür
double Triangle::getHeight() const
{
    return height;
}

// Görüntüle
void Triangle::display() const
{
    std::cout << "Triangle: \n"
        << "Length: " << getLength() << " && Height: " << getHeight()
        << " | Area: " << getArea()
        << "\n\n";
}

// Alan Hesapla
double Triangle::getArea() const
{
    return 0.5 * length * height;
}