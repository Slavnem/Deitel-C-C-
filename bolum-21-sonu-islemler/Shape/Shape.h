// Slavnem @2024-10-04
// Shape Sınıfı Tanımı
#ifndef SHAPE_H
#define SHAPE_H

// Sınıf
class Shape
{
    public:
        virtual ~Shape() {} // Sanal Yıkıcı
        
        virtual void display() const = 0; // Görüntüle
};

#endif // SHAPE_H