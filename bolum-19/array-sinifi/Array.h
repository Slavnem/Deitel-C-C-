// Slavnem @2024-07-29
// Aşırı yüklenmiş operatörlü Array sınıfı tanımı
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

class Array
{
    friend ostream &operator<<(ostream &, const Array &);
    friend istream &operator>>(istream &, Array &);

    public:
        Array(int = 10); // varsayılan kurucu
        Array(const Array &); // kopya kurucu
        ~Array(); // yıkıcı
        int getSize() const; // boyut döndür

        const Array &operator=(const Array &); // atama operatörü
        bool operator==(const Array &) const; // eşitlik operatörü

        // Eşitsizlik operatörü, == operatörünün tersini döndürür
        bool operator!=(const Array &right) const
        {
            return ! (*this == right); // Array::operator== metodunu çağırır
        }

        // değişken nesneler için indis operatörü,
        // değiştirilebilir sol değerler döndürür
        int &operator[](int);

        // sabit nesneler için indis operatörü,
        // sağ değer döndürür
        int operator[](int) const;

    private:
        int size; // işaretçi tabanlı dizi boyutu
        int *ptr; // işaretçi tabanlı dizinin ilk elemanını işaret eden işaretçi
};

#endif