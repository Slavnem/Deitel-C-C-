// Slavnem @2024-10-04
// ThreeDimensionalShape Sınıfı Tanımı
#ifndef THREEDIMENSIONAL_H
#define THREEDIMENSIONAL_H

// Kütüphaneler
#include "TwoDimensionalShape.h" // 2 Boyutlu

// Sınıf
class ThreeDimensionalShape : public TwoDimensionalShape
{
    public:
        virtual ~ThreeDimensionalShape() { } // Sanal Yıkıcı

        virtual void display() const override; // Görüntüle
        virtual double getArea() const = 0; // Alan Hesapla
        virtual double getVolume() const = 0; // Hacim Hesapla
};

#endif // THREEDIMENSIONAL_H