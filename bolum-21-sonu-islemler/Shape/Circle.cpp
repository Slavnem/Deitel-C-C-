// Slavnem @2024-10-04
// Circle Sınıfı Fonksiyonlar

// Kütüphaneler
#include <iostream>
#include "Circle.h"

// Kurucu
Circle::Circle(const double argRadius)
{
    setRadius(argRadius);
}

// Yarıçap Değerini Ata
void Circle::setRadius(const double argRadius)
{
    // yarıçap kontrolü
    if(argRadius < 1.0)
        throw std::invalid_argument("Daire Yarıçapı En Az 1.0 Olabilir");

    radius = argRadius;
}

// Yarıçap Değerini Döndür
double Circle::getRadius() const
{
    return radius;
}

// Görüntüle
void Circle::display() const
{
    std::cout << "Circle: \n"
        << "Radius: " << getRadius()
        << " | Area: " << getArea()
        << "\n\n";
}

// Alan Hesapla
double Circle::getArea() const
{
    return PI * radius * radius; // hesapla ve döndür (yarıçapın karesi çarpı pi)
}