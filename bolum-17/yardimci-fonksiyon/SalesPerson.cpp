// Slavnem @2024-07-13
// SalesPerson Sınıfı İşleyicisi

// Kütüphaneler
#include <iostream>
#include <iomanip>
#include "SalesPerson.h"

using namespace std;

// dizi satış elemanlarına 0.0 başlatma
SalesPerson::SalesPerson()
{
    for(int i = 0; i < monthsPerYear; ++i)
        sales[i] = 0.0;
}

// 12 aylık satış miktarını alma
void SalesPerson::getSalesFromUser()
{
    double salesFigure;

    for(int i = 1; i <= monthsPerYear; ++i)
    {
        cout << i << " . Ay için satış tutarı giriniz: ";
        cin >> salesFigure;

        setSales(i, salesFigure);
    }
}

// 12 aylık satış miktarlarını getirme
// fonksiyon, satış dizisindeki uygun alt indis için
// ay değerinden birini çıkarır
void SalesPerson::setSales(int month, double amount)
{
    // geçerli ay veya miktar değeri
    if(month >= 1 && month <= monthsPerYear && amount > 0)
        sales[month - 1] = amount; // alt simgeleri 0-11 ayarlama
    else
        cout << "Geçersiz ay veya satış rakamı" << endl;
}

// (utility fonksiyonu yardımı ile) toplam yıllık satışları yazdırma
void SalesPerson::printAnnualSales()
{
    cout << setprecision(2) << fixed
        << "\nToplam yıllık satış: $"
        << totalAnnualSales() << endl; // utility fonksiyonu çağırılır
}

// toplam yıllık satış için private utility fonksiyonu
double SalesPerson::totalAnnualSales()
{
    double total = 0.0; // toplam başlatma

    // satış sonuçlarını özetleme
    for(int i = 0; i < monthsPerYear; ++i)
        total += sales[i];

    return total;
}