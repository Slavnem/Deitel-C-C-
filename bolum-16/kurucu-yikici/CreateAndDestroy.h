// Slavnem @2024-07-14
// Kurucu ve Yıkıcı Sınıfı Prototipi

// Kütüphaneler
#include <string>

using namespace std;

#ifndef CREATE_H
#define CREATE_H

class CreateAndDestroy
{
    public:
        CreateAndDestroy(int, string); // kurucu
        ~CreateAndDestroy(); // yıkıcı

    private:
        int objectID; // nesne için kimlik numarası
        string message;  // nesneyi açıklayan mesaj
};

#endif