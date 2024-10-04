// Slavnem @2024-10-04
// Circle Sınıfı Tanımı
#ifndef CIRCLE_H
#define CIRCLE_H

// Kütüphaneler
#include "TwoDimensionalShape.h"

// Ön Tanımlamalar
#ifndef PI
    #define PI 3.14159
#endif // PI

// Sınıf
class Circle : public TwoDimensionalShape
{
    private:
        double radius; // Yarıçap

    public:
        Circle(const double = 1.0); // Kurucu

        void setRadius(const double); // Yarıçap Değerini Ata
        double getRadius() const; // Yarıçap Değerini Döndür

        virtual void display() const override; // Görüntüle
        virtual double getArea() const override; // Alan Hesapla
};

#endif // CIRCLE_H