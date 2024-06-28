// Slavnem @2024-06-28
// "inline" Kullanarak Küp Hacimi Hesaplama

// Kütüphaneler
#include <iostream>

// Kullanımlar
using std::cout;
using std::cin;
using std::endl;

// inline cube fonksiyonunun tanımlanması.
// Fonksiyon tanımı fonksiyon çağırılmadan önce yapılmış.
// Böylece fonksiyon prototipi gerektirmiyor.
// Fonksiyon tanımının ilk satırı prototip olarak davranmaktadır
inline double cube(const double side)
{
    return (side * side * side); // hesapla
}

// main
int main()
{
    double sideValue; // kullanıcı tarafından girilen değeri saklar

    for(int i = 1; i <= 3; i++)
    {
        cout << "\nKup icin kenar uzunlugu giriniz: ";
        cin >> sideValue; // kullanıcıdan değeri oku

        // side uzunluklu küpün değerini hesapla ve sonucu görüntüle
        cout << sideValue << " degeri ile kupun hacimi: " << cube(sideValue) << endl;
    }
}