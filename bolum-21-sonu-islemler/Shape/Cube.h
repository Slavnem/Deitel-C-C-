// Slavnem @2024-10-04
// Cube Sınıfı Tanımı
#ifndef CUBE_H
#define CUBE_H

// Kütüphaneler
#include "ThreeDimensionalShape.h"

// Sınıf
class Cube : public ThreeDimensionalShape
{
    private:
        double angle; // Köşe
    
    public:
        Cube(const double = 1.0); // Kurucu

        void setAngle(const double); // Köşe Değerini Ata
        double getAngle() const; // Köşe Değerini Döndür

        virtual void display() const override; // Görüntüle
        virtual double getArea() const override; // Alanı Hesapla
        virtual double getVolume() const override; // Hacim Hesapla
};

#endif // CUBE_H