// Slavnem @2024-07-05

// Kütüphaneler
#include <iostream>
#include "maximum.h"

using namespace std;

// main
int main()
{
    // tamsayı değerler ile en yüksek gösterimi
    int int1, int2, int3;

    cout << "3 adet tam sayi giriniz: ";
    cin >> int1 >> int2 >> int3;

    // maximum fonksiyonunun tam sayı versiyonunu çağır
    cout << "En yuksek tamsayi degeri: " << maximum(int1, int2, int3);

    // ondalıklı değerler ile en yüksek gösterimi
    double double1, double2, double3;

    cout << "\n\n3 adet ondalikli sayi giriniz: ";
    cin >> double1 >> double2 >> double3;

    // maximum fonksiyonunun ondalıklı versiyonunu çağır
    cout << "En yuksek ondalikli sayi degeri: " << maximum(double1, double2, double3);

    // char değerler ile en yüksek göstermek
    char char1, char2, char3;

    cout << "\n\n3 adet karakter giriniz: ";
    cin >> char1 >> char2 >> char3;

    // maximum fonksiyonunun karakter versiyonunu çağır
    cout << "En yuksek karakter degeri: " << maximum(char1, char2, char3) << endl;
}