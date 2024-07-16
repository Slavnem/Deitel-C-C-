// Slavnem @2024-07-16
// Rectangle Sınıfı Prototipi

#ifndef RECTANGLE_H
#define RECTANGLE_H

// Rectangle Sınıfı Tanımı
class Rectangle
{
    public:
        // Kurucu
        Rectangle(double = 2.5, double = 1.5);

        // Ayarla (Set)
        void setLength(double); // uzunluk ayarla
        void setWidth(double); // genişlik ayarla

        // Getir (Get)
        double getLength(); // uzunluk getir
        double getWidth(); // genişlik getir

        // Hesaplayıcılar (Calculators)
        double calcCevre();
        double calcAlan();

    private:
        double length; // uzunluk
        double width; // genişlik
};

#endif