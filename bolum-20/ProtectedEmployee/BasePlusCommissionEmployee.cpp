// Slavnem @2024-09-11
// BasePlusCommissionEmployee Sınıfı
#include <iostream>
#include "BasePlusCommissionEmployee.h"
using namespace std;

// Kurucu
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string &first, const string &last, const string &ssn,
    double sales, double rate, double salary)
    // temel sınıfın kurucusunu açık olarak çağırma
    : CommissionEmployee(first, last, ssn, sales, rate)
{
    setBaseSalary(salary); // Taban Maaş Kontrolü
}

// Taban Maaşı Ata
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if(salary >= 0.0)
        baseSalary = salary;
    else
        throw invalid_argument("Salary must be >= 0.0");
}

// Taban Maaş Değerini Döndür
double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
}

// Kazancı Hesapla
double BasePlusCommissionEmployee::earnings() const
{
    // türemiş sınıf, temel sınıfın private verilerine erişemez
    // ama protected verilerine erişebilir
    return baseSalary + (commissionRate + grossSales);
}

// Nesneyi Yazdır
void BasePlusCommissionEmployee::print() const
{
    cout << "Base Salaried Commission Employee: " << firstName << ' ' << lastName
        << "\nSocial Security Number: " << socialSecurityNumber
        << "\nGross Sales: " << grossSales
        << "\nCommission Rate: " << commissionRate
        << "\nBase Salary: " << baseSalary;
}