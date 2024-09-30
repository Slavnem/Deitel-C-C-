// Slavnem @2024-09-08 (Update: @2024-10-01)
// BasePlusCommissionEmployee Fonksiyon Tanımları
#include <iostream>
#include "BasePlusCommissionEmployee.h"
using namespace std;

// Kurucu
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string &first, const string &last, const string &ssn,
    double sales, double rate, double salary)
    : CommissionEmployee(first, last, ssn, sales, rate)
{
    setBaseSalary(salary);
}

// Taban Maaşı Ata
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if(salary >= 0.0)
        baseSalary = salary;
    else
        throw invalid_argument("Salary must be >= 0.0");
}

// Taban Maaşı Döndür
double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
}

// Kazancı Hesapla
double BasePlusCommissionEmployee::earnings() const
{
    return baseSalary + (getCommissionRate() * getGrossSales());
}

// Nesnesyi Yazdır
void BasePlusCommissionEmployee::print() const
{
    cout << "base-salaried commission employee: " << getFirstName() << ' '
        << getLastName() << "\nsocial security number: " << getSocialSecurityNumber()
        << "\ngross sales: " << getGrossSales()
        << "\ncommission rate: " << getCommissionRate()
        << "\nbase salary: " << baseSalary;
}