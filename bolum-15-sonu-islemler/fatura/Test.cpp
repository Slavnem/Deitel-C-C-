// Slavnem @2024-07-12
// Test

// Kütüphaneler
#include "Fatura.h"

// main
int main()
{
    // geçersiz bilgiler ile oluşturmak
    Fatura fatura1("","",-5,-3);

    // ilk oluşturulan halini getirtmek
    cout << "Fatura:\n"
        << " | Numara: " << fatura1.getParcaNumara()
        << " | Tanim: " << fatura1.getParcaTanim()
        << " | Miktar: " << fatura1.getUrunMiktar()
        << " | Fiyat: " << fatura1.getFiyatBilgi()
        << " | Toplam Fiyat: " << fatura1.getFaturaMiktari()
        << endl;

    // verileri anlamlı veriler ile güncelle
    fatura1.setParcaNumara("ab3ffxhk213da");
    fatura1.setParcaTanim("ilk-parca");
    fatura1.setUrunMiktar();
    fatura1.setFiyatBilgi(10);

    // güncellenmiş halini getirtmek
    cout << "Fatura:\n"
        << " | Numara: " << fatura1.getParcaNumara()
        << " | Tanim: " << fatura1.getParcaTanim()
        << " | Miktar: " << fatura1.getUrunMiktar()
        << " | Fiyat: " << fatura1.getFiyatBilgi()
        << " | Toplam Fiyat: " << fatura1.getFaturaMiktari()
        << endl;
}