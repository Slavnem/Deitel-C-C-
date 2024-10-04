// Slavnem @2024-10-04
// Main

// Kütüphaneler
#include <iostream>
#include <vector>
#include <typeinfo>

#include "Shape.h"
#include "TwoDimensionalShape.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"

#include "ThreeDimensionalShape.h"
#include "Sphere.h"
#include "Cube.h"
#include "Tetrahedron.h"

using namespace std;

// main
int main()
{
    // temel sınıfların vektörünü oluştur
    vector <Shape *> shapes(6);

    // değişik tipler için Shape başlat
    shapes[0] = new Circle(3.2);
    shapes[1] = new Square(1.4);
    shapes[2] = new Triangle(2.7);
    shapes[3] = new Sphere(4.4);
    shapes[4] = new Cube(1.9);
    shapes[5] = new Tetrahedron(2.3);

    // Shape vektöründeki her elemanı çok biçimli olarak işle
    for(Shape *shapeptr : shapes)
    {
        // 2 boyutlu olduğu için çıktı versin
        if(typeid(*shapeptr) == typeid(Circle)
            || typeid(*shapeptr) == typeid(Square)
            || typeid(*shapeptr) == typeid(Triangle))
        {
            shapeptr->display();
        }
    }

    // dinamik belleği temizlemek
    for (Shape *shapeptr : shapes)
        delete shapeptr;
}