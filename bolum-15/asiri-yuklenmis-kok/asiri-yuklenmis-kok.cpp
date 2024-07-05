// Slavnem @2024-07-05
// Aşırı Yüklenmiş Kök Hesaplama Fonksiyonları

// Kütüphaneler
#include <iostream>
using namespace std;

// int değerler için square fonksiyonu
int square(int x)
{
    cout << "Tamsayi kok " << x << " = ";
    return x*x;
}

// double değerler için square fonksiyonu
double square(double y)
{
    cout << "Ondalikli kok " << y << " = ";
    return y*y;
}

// main
int main()
{
    cout << square(7) << endl; // tamsayı versiyonunu çağırır
    cout << square(7.5) << endl;; // ondalıklı versiyonunu çağırır
}