// Slavnem @2024-07-03
// Tekli Kapsam Çözümleme Operatörü Kullanımı

// Kütüphaneler
#include <iostream>
using namespace std;

int number = 7; // number isimli global değişken

// main
int main()
{
    double number = 10; // number isimli yerel değişken

    // yerel ve global değişkenin değerini ekranda göstermek
    cout << "Yerel ondalik deger: " << number
        << "\nGlobal tamsayi deger: " << ::number << endl;
}