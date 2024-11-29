// Slavnem @2024-11-29 22:12 Debian 12
// Point
#ifndef POINT_INC_H
#define POINT_INC_H

// Headers
#include <iostream>

// Point
class Point
{
    private:
        int xCoordinate;
        int yCoordinate;

    public:
        friend std::ostream& operator<<(std::ostream&, const Point&);
        friend std::istream& operator>>(std::istream&, Point&);

        explicit Point(const int, const int);
};

// ostream <<
std::ostream& operator<<(std::ostream& _ostream, const Point& _point)
{
    // veriyi çıktı versin
    std::cout << "Coordinate X: " << _point.xCoordinate
        << "\nCoordinate Y: " << _point.yCoordinate
        << std::endl;

    return _ostream;
}

// istream >>
std::istream& operator>>(std::istream& _istream, Point& _point)
{
    // veriyi al
    std::cin >> _point.xCoordinate >> _point.yCoordinate;

    // hata durum yoksa sorun yok
    if(std::cin.good())
        return _istream;

    // hata durumu ayarla (failbit)
    std::cin.setstate(std::ios::failbit);

    return _istream;
}

// Point
Point::Point(const int _x, const int _y)
    : xCoordinate(_x),
    yCoordinate(_y)
{ /* BOŞ */ }

#endif // POINT_INC_H