// Slavnem @2024-10-04
// Cube Sınıfı Fonksiyonlar

// Kütüphaneler
#include <iostream>
#include "Cube.h"

// Kurucu
Cube::Cube(const double argAngle)
{
    setAngle(argAngle);
}

// Köşe Değerini Ata
void Cube::setAngle(const double argAngle)
{
    if(argAngle < 1.0)
        throw std::invalid_argument("Küp Köşesi En Az 1.0 Olabilir");

    angle = argAngle;
}

// Köşe Değerini Döndür
double Cube::getAngle() const
{
    return angle;
}

// Görüntüle
void Cube::display() const
{
    std::cout << "Cube: \n"
        << "Angle: " << getAngle()
        << " | Area: " << getArea() << " && Volume: " << getVolume()
        << "\n\n";
}

// Alan Hesapla
double Cube::getArea() const
{
    return angle * angle;
}

// Hacim Hesapla
double Cube::getVolume() const
{
    return angle * angle * angle;
}