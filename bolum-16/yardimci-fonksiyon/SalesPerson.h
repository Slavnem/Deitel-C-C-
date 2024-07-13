// Slavnem @20240-07-13
// SalesPerson Sınıfı Prototipi

#ifndef SALESPERSON_H
#define SALESPERSON_H

class SalesPerson
{
    public:
        static const int monthsPerYear = 12; // bir yıldaki ay
        SalesPerson(); // kurucu
        void getSalesFromUser(); // klavyeden veri girişi
        void setSales(int, double); // belirli bir ay için belirlenen satış
        void printAnnualSales(); // satışların çıktıs

    private:
        double totalAnnualSales(); // utility fonksiyon için prototip
        double sales[monthsPerYear]; // aylık satış miktarları
};

#endif