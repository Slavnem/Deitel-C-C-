// Slavnem @2024-10-04
// CommissionEmployee Sınıfı Fonksiyonlar

// Kütüphaneler
#include <iostream>
#include <stdexcept>
#include "CommissionEmployee.h"

using namespace std;

// Kurucu
CommissionEmployee::CommissionEmployee(const string &first,
    const string &last, const string &ssn, double sales, double rate)
    : Employee(first, last, ssn)
{
    setGrossSales(sales);
    setCommissionRate(rate);
}

// Brüt Satış Miktarını Ata
void CommissionEmployee::setGrossSales(double sales)
{
    if(sales < 0.0)
        throw invalid_argument("Gross Sales Must Be >= 0.0");

    grossSales = sales;
}

// Brüt Satış Miktarını Döndür
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}

// Komisyon Oranını Ata
void CommissionEmployee::setCommissionRate(double rate)
{
    if(rate <= 0.0 && rate >= 1.0)
        throw invalid_argument("Commission Rate Must Be > 0.0 And < 1.0");

    commissionRate = rate;
}

// Komisyon Oranını Döndür
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

// Employee'deki saf virtual earnings fonksiyonunu ez
// Geliri Hesapla
double CommissionEmployee::earnings() const
{
    return getCommissionRate() * getGrossSales();
}

// Nesneyi Yazdır
void CommissionEmployee::print() const
{
    cout << "Commission Employee: ";
    Employee::print(); // kodu yeniden kullanma
    cout << "\nGross Sales: " << getGrossSales()
        << "; Commission Rate: " << getCommissionRate();
}