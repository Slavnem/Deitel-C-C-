// Slavnem @2024-10-04
// Sphere Sınıfı Fonksiyonlar

// Kütüphaneler
#include <iostream>
#include "Sphere.h"

// Kurucu
Sphere::Sphere(const double argRadius)
{
    setRadius(argRadius);
}

// Yarıçap Değerini Ata
void Sphere::setRadius(const double argRadius)
{
    if(argRadius < 1.0)
        throw std::invalid_argument("Küre Yarıçapı En Az 1.0 Olabilir");

    radius = argRadius;
}

// Yarıçap Değerini Döndür
double Sphere::getRadius() const
{
    return radius;
}

// Görüntüle
void Sphere::display() const
{
    std::cout << "Sphere: \n"
        << "Radius: " << getRadius()
        << " | Area: " << getArea() << " && Volume: " << getVolume()
        << "\n\n";
}

// Alan Hesapla
double Sphere::getArea() const
{
    return 4 * PI * radius * radius;
}

// Hacim Hesapla
double Sphere::getVolume() const
{
    return (4/3) * PI * radius * radius * radius;
}