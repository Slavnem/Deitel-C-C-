// Slavnem @2024-07-12
// Test

// Kütüphaneler
#include "Personel.h"

// main
int main()
{
    // örnek personel nesneleri oluşturma
    Personel personel1("Abuzer","Komurcu",9999);
    Personel personel2("Hacı","Beko",-3252);

    // personel 1'in bilgileri çıktı
    cout << "\nPersonel 1:"
        << "\nAd: " << personel1.getAd()
        << "\nSoyad: " << personel1.getSoyad()
        << "\nMaas: " << personel1.getMaas()
        << endl;

    // personel 2'in bilgileri çıktı
    cout << "\nPersonel 2:"
        << "\nAd: " << personel2.getAd()
        << "\nSoyad: " << personel2.getSoyad()
        << "\nMaas: " << personel2.getMaas()
        << endl;

    // personel 1 maaş güncelle
    personel1.setMaas((int)(personel1.getMaas() * 1.1));

    // personel 1'in güncel bilgileri çıktı
    cout << "\nPersonel 1:"
        << "\nAd: " << personel1.getAd()
        << "\nSoyad: " << personel1.getSoyad()
        << "\nMaas: " << personel1.getMaas()
        << endl;
}