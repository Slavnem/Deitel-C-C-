// Slavnem @2024-07-12
// Personel Sınıfı Prototipi

// Kütüphaneler
#include <iostream>
using namespace std;

// Personel Sınıfı
class Personel
{
    public:
        // Sınıf Başlangıcı
        Personel(string, string, int);

        // SET
        void setAd(string);
        void setSoyad(string);
        void setMaas(int);

        // GET
        string getAd();
        string getSoyad();
        int getMaas();

    private:
        string ad;
        string soyad;
        int maas;
};