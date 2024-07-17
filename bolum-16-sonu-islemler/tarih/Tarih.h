// Slavnem @2024-07-12
// Tarih Sınıfı Prototipi

// Kütüphaneler
#include <iostream>
using namespace std;

// Tarih Sınıfı
class Tarih
{
    public:
        // Sınıf Başlangıcı
        Tarih(int, int, int);

        // SET
        void setAy(int);
        void setGun(int);
        void setYil(int);

        // GET
        int getAy();
        int getGun();
        int getYil();

        // NORMAL
        void displayDate();

    private:
        int ay;
        int gun;
        int yil;
};