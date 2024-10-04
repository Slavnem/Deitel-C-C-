// Slavnem @2024-10-04
// Tetrahedron Sınıfı Tanımı
#ifndef TETRAHEDRON_H
#define TETRAHEDRON_H

// Kütüphaneler
#include "ThreeDimensionalShape.h"

// Sınıf
class Tetrahedron : public ThreeDimensionalShape
{
    private:
        double angle; // Kenar

    public:
        Tetrahedron(const double = 1.0); // Kurucu

        void setAngle(const double); // Köşe Değerini Ata
        double getAngle() const; // Köşe Değerini Döndür

        virtual void display() const override; // Görüntüle
        virtual double getArea() const override; // Alanı Hesapla
        virtual double getVolume() const override; // Hacimi Hesapla
};

#endif // TETRAHEDRON_H