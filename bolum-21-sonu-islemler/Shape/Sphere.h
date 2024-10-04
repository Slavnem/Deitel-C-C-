// Slavnem @2024-10-04
// Sphere Sınıf Tanımı
#ifndef SPHERE_H
#define SPHERE_H

// Kütüphaneler
#include "ThreeDimensionalShape.h"

// Ön Tanımlamalar
#ifndef PI
    #define PI 3.14159
#endif // PI

// Sınıf
class Sphere : public ThreeDimensionalShape
{
    private:
        double radius; // Yarıçap

    public:
        Sphere(const double = 1.0); // Kurucu

        void setRadius(const double); // Yarıçap Değerini Ata
        double getRadius() const; // Yarıçap Değerini Döndür

        virtual void display() const override; // Görüntüle
        virtual double getArea() const override; // Alan Hesapla
        virtual double getVolume() const override; // Hacim Hesapla
};

#endif // SPHERE_H