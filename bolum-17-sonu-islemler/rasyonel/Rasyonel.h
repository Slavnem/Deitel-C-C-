// Slavnem @2024-07-15
// Rasyonel Sınıfı Prototipi

#ifndef RASYONEL_H
#define RASYONEL_H

// Rasyonel Sınıfı
class Rasyonel
{
    public:
        // Yapıcı
        Rasyonel(int = 1, int = 2);

        // Set
        void setBolen(int);
        void setBolunen(int);

        // Get
        int getBolen();
        int getBolunen();
        double getSonuc();

        // İşlemler
        int islemTopla();
        int islemCikar();
        int islemCarp();
        double islemBol();

        // Çıktı
        void ciktiMatematik(); // matematiksel yazdırma, örnek: 5/6
        void ciktiOndalik(); // ondalıklı yazdırma, örnek: 3.45

        // Yıkıcı
        ~Rasyonel();

    private:
        int bolen;
        int bolunen;
        double sonuc;
};

#endif