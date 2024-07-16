// Slavnem @2024-07-16
// Rectangle Sınıfı İşleyicileri

// Kütüphaneler
#include <iostream>
#include <stdexcept>
#include "Rectangle.h"

using namespace std;

// Kurucu
Rectangle::Rectangle(double l, double w)
{
    setLength(l); /// uzunluğu ayarla
    setWidth(w); // genişliği ayarla
}

// Uzunluk Ayarlama
void Rectangle::setLength(double l)
{
    // uzunluk kontrolü
    if(l < 1.0 || l > 20.0)
        throw invalid_argument("\n* Uzunluk En Az 1.0, En Fazla 20.0 Olabilir *\n");

    length = l;
}

// Genişlik Ayarlama
void Rectangle::setWidth(double w)
{
    // genişlik kontrolü
    if(w < 1.0 || w > 20.0)
        throw invalid_argument("\n* Genişlik En Az 1.0, En Fazla 20.0 Olabilir *\n");

    width = w;    
}

// Uzunluk Getirme
double Rectangle::getLength()
{
    return length;
}

// Genişlik Getirme
double Rectangle::getWidth()
{
    return width;
}

// Çevre Hesaplama
double Rectangle::calcCevre()
{
    return ((length * 2) + (width * 2));
}

// Alan Hesaplama
double Rectangle::calcAlan()
{
    return (length * width);
}