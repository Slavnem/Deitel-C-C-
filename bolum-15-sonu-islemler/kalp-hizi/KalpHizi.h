// Slavnem @2024-07-12
// Kalp Hızı Sınıfı Prototipi

// Kütüphaneler
#include <iostream>
using namespace std;

// Kalp Hızı Sınıfı
class KalpHizi
{
    public:
        // Sınıf Başlangıcı
        KalpHizi(string, string, int, int, int);

        // SET
        void setAd(string);
        void setSoyad(string);
        void setDogum(int, int, int);

        // GET
        string getAd();
        string getSoyad();
        void getDogum();
        int getYas();
        int getMaxKalpHizi();
        int getHedefKalpHizi();

    private:
        string ad;
        string soyad;
        int ay;
        int gun;
        int yil;
};