// Slavnem @2024-10-04
// Tetrahedron Sınıfı Fonksiyonlar

// Kütüphaneler
#include <iostream>
#include <cmath>
#include "Tetrahedron.h"

// Kurucu
Tetrahedron::Tetrahedron(const double argAngle)
{
    setAngle(argAngle);
}

// Köşe Değerini Ata
void Tetrahedron::setAngle(const double argAngle)
{
    if(argAngle < 1.0)
        throw std::invalid_argument("Dört Yüzlü Şekilin Köşesi En Az 1.0 Olabilir");

    angle = argAngle;
}

// Köşe Değerini Döndür
double Tetrahedron::getAngle() const
{
    return angle;
}

// Görüntüle
void Tetrahedron::display() const
{
    std::cout << "Tetrahedron: \n"
        << "Angle: " << getAngle()
        << " | Area: " << getArea() << " && Volume: " << getVolume()
        << "\n\n";
}

// Alanı Hesapla
double Tetrahedron::getArea() const
{
    // kök 3 çarpı a kare
    return sqrt(3.0) * angle * angle;
}

// Hacimi Hesapla
double Tetrahedron::getVolume() const
{
    // a küp / 6 kök 2
    return (angle * angle * angle) / (6 * sqrt(2.0));
}