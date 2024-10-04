// Slavnem @2024-10-04
// Triangle Sınıfı Tanımı
#ifndef TRIANGLE_H
#define TRIANGLE_H

// Kütüphaneler
#include "TwoDimensionalShape.h"

// Sınıf
class Triangle : public TwoDimensionalShape
{
    private:
        double length; // Taban Uzunluğu
        double height; // Yükseklik

    public:
        Triangle(const double = 1.0, const double = 1.0); // Kurucu

        void setLength(const double); // Taban Uzunluğu Değerini Ata
        double getLength() const; // Taban Uzunluğu Değerini Döndür

        void setHeight(const double); // Yükseklik Değerini Ata
        double getHeight() const; // Yükseklik Değerini Döndür

        virtual void display() const override; // Görüntüle
        virtual double getArea() const override; // Alan Hesapla
};

#endif // TRIANGLE_H