// Slavnem @2024-07-12
// Test

// Kütüphaneler
#include "Tarih.h"

// main
int main()
{
    // örnek tarih nesneleri oluşturmak
    Tarih tarih1(0,0,0);
    Tarih tarih2(04,23,2004); // 23 Nisan 2004, Doğum Tarihim

    // ilk tarihin değerlerini göstermek
    tarih1.displayDate();

    // ikinci tarihin değerlerini göstermek
    tarih2.displayDate();
}