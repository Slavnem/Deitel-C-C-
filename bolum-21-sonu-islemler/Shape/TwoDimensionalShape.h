// Slavnem @2024-10-04
// TwoDimensionalShape Sınıfı Tanımı
#ifndef TWODIMENSIONAL_H
#define TWODIMENSIONAL_H

// Kütüphaneler
#include "Shape.h"

// Sınıf
class TwoDimensionalShape : public Shape
{
    public:
        virtual ~TwoDimensionalShape() {} // Sanal Yıkıcı

        virtual void display() const override; // Görüntüle
        virtual double getArea() const = 0; // Alan Hesapla
};

#endif // TWODIMENSIONAL_H