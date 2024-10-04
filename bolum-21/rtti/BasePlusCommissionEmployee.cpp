// Slavnem @2024-10-04
// BasePlusCommissionEmployee Sınıfı Fonksiyonlar

// Kütüphaneler
#include <iostream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"

using namespace std;

// Kurucu
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string &first, const string &last, const string &ssn,
    double sales, double rate, double salary)
    : CommissionEmployee(first, last, ssn, sales, rate)
{
    setBaseSalary(salary); // Temel Maaşı Doğrula ve Kaydet
}

// Taban Maaş Ata
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if(salary < 0.0)
        throw invalid_argument("Salary Must Be >= 0.0");

    baseSalary = salary;
}

// Taban Maaş Döndür
double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
}

// CommissionEmployee'deki virtual earnings fonksiyonunu ez
// Kazancı Hesapla
double BasePlusCommissionEmployee::earnings() const
{
    return getBaseSalary() + CommissionEmployee::earnings();
}

// Nesneyi Yazdır
void BasePlusCommissionEmployee::print() const
{
    cout << "Base Salaried ";
    CommissionEmployee::print(); // kodun yeniden kullanımı
    cout << "; Base Salary: " << getBaseSalary();
}