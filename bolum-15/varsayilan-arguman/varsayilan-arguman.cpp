// Slavnem @2024-07-03
// Fonksiyon Argümana Varsayılan Değer Vererek Kullanmak

// Kütüphaneler
#include <iostream>
using namespace std;

// varsayılan argümanları belirten fonksiyon prototipi
int boxVolume(int length = 1, int width = 1, int heigth = 1);

// main
int main()
{
    // argüman yok-tüm boyutlar için varsayılan değerleri kullan
    cout << "Varsayilan kup hacimi: " << boxVolume();

    // belirtilmiş boy uzunluğu: varsayılan en ve yükseklik
    cout << "\n\nKup uzunlugu 10'dur\n"
        << "genislik 1 ve yukseklik 1, hacim: " << boxVolume(10);

    // belirtilmiş boy ve en: varsayılan yükseklik
    cout << "\n\nKup uzunlugu 10'dur\n"
        << "genislik 5 ve yukseklik 1, hacim: " << boxVolume(10, 5);

    // tüm argümanlar belirtilmiş
    cout << "\n\nKup uzunlugu 10'dur\n"
        << "genislik 5 ve yukseklik 2, hacim: " << boxVolume(10, 5, 2)
        << endl;
}

// boxVolume fonksiyonu bir kutunun hacimini hesaplar
int boxVolume(int length, int width, int height)
{
    return length * width * height;
}