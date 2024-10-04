// Slavnem @2024-10-04
// Square Sınıfı Fonksiyonlar

// Kütüphaneler
#include <iostream>
#include "Square.h"

// Kurucu
Square::Square(const double argAngle)
{
    setAngle(argAngle);
}

// Köşe Değerini Ata
void Square::setAngle(const double argAngle)
{
    if(argAngle < 1.0)
        throw std::invalid_argument("Kare Köşesi En Az 1.0 Olabilir");

    angle = argAngle;
}

// Köşe Değerini Döndür
double Square::getAngle() const
{
    return angle;
}

// Görüntüle
void Square::display() const
{
    std::cout << "Square: \n"
        << "Angle: " << getAngle()
        << " | Area: " << getArea()
        << "\n\n";
}

// Alan Hesapla
double Square::getArea() const
{
    return angle * angle; // köşeleri çarpıp döndürsün
}