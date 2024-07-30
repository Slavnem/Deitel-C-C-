// Slavnem @2024-07-30
// DoubleSubscriptedArray sınıfı tanımı
#ifndef DOUBLE_SUBSCRIPTED_ARRAY_H
#define DOUBLE_SUBSCRIPTED_ARRAY_H

// Kütüphaneler
#include <iostream>
using namespace std;

// Sınıf
class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream &, const DoubleSubscriptedArray &);
    friend istream &operator>>(istream &, DoubleSubscriptedArray &);

    private:
        int row = 0; // satır boyutu
        int col = 0; // sütun boyutu
        int size = row * col; // işaretçi boyutu
        int *ptr = NULL; // dizi işaretçisi

    public:
        explicit DoubleSubscriptedArray(int = 5, int = 6); // varsayılan kurucu
        explicit DoubleSubscriptedArray(const DoubleSubscriptedArray &); // kopya kurucu
        
        ~DoubleSubscriptedArray(); // yıkıcı

        int &operator()(const int, const int); // satır sütun verisini alma
        int &operator()(const int, const int) const; // satır sütun verisini alma

        bool operator==(const DoubleSubscriptedArray &) const; // karşılaştırma
        bool operator!=(const DoubleSubscriptedArray &) const; // eşit değilse
        
        const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &); // atama
};

#endif