// Slavnem @2024-10-04
// Square Sınıfı Tanıtımı
#ifndef SQUARE_H
#define SQUARE_H

// Kütüphaneler
#include "TwoDimensionalShape.h"

// Sınıf
class Square : public TwoDimensionalShape
{
    private:
        double angle; // Köşe

    public:
        Square(const double = 1.0); // Kurucu

        void setAngle(const double); // Köşe Değerini Ata
        double getAngle() const; // Köşe Değerini Döndür

        virtual void display() const override; // Görüntüle
        virtual double getArea() const override; // Alanı Hesapla
};

#endif // SQUARE_H