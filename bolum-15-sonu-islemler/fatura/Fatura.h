// Slavnem @2024-07-12
// Fatura Sınıfı Prototipi

// Kütüphaneler
#include <iostream>
using namespace std;

class Fatura
{
    public:
        // Sınıf Başlatıcısı
        Fatura(string, string, int, int);

        // set
        void setParcaNumara(string);
        void setParcaTanim(string);
        void setUrunMiktar(int miktar = 0); // başlangıçta ürün miktarı 0
        void setFiyatBilgi(int);

        // get
        string getParcaNumara();
        string getParcaTanim();
        int getUrunMiktar();
        int getFiyatBilgi();
        int getFaturaMiktari();

    private:
        string parcaNumarasi;
        string parcaTanimi;
        int urunMiktari;
        int fiyatBilgisi;
};