// Slavnem @2024-09-08
// BasePlusCommissionEmployee Fonksiyon Tanımları
#include <iostream>
#include "BasePlusCommissionEmployee.h"
using namespace std;

// Kurucu
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string &first, const string &last, const string &ssn,
    double sales, double rate, double salary
)
{
    firstName = first;
    lastName = last;
    socialSecurityNumber = ssn;

    setGrossSales(sales);
    setCommissionRate(rate);
    setBaseSalary(salary);
}

// Ad Ata
void BasePlusCommissionEmployee::setFirstName(const string &first)
{
    firstName = first;
}

// Ad Getir
string BasePlusCommissionEmployee::getFirstName() const
{
    return firstName;
}

// Soyad Ata
void BasePlusCommissionEmployee::setLastName(const string &last)
{
    lastName = last;
}

// Soyad Getir
string BasePlusCommissionEmployee::getLastName() const
{
    return lastName;
}

// Sosyal Güvenlik Numarası Ata
void BasePlusCommissionEmployee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber = ssn;
}

// Sosyal Güvenlik Numarası Getir
string BasePlusCommissionEmployee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}

// Bürüt Satış Miktarı Ata
void BasePlusCommissionEmployee::setGrossSales(double sales)
{
    if(sales >= 0.0)
        grossSales = sales;
    else
        throw invalid_argument("Gross sales must be >= 0.0");    
}

// Bürüt Satış Miktarı Getir
double BasePlusCommissionEmployee::getGrossSales() const
{
    return grossSales;
}

// Komisyon Oranını Ata
void BasePlusCommissionEmployee::setCommissionRate(double rate)
{
    if(rate > 0.0 && rate < 1.0)
        commissionRate = rate;
    else
        throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
}

// Komisyon Oranını Getir
double BasePlusCommissionEmployee::getCommissionRate() const
{
    return commissionRate;
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
    return baseSalary + (commissionRate * grossSales);
}

// Nesnesyi Yazdır
void BasePlusCommissionEmployee::print() const
{
    cout << "base-salaried commission employee: " << firstName << ' '
        << lastName << "\nsocial security number: " << socialSecurityNumber
        << "\ngross sales: " << grossSales
        << "\ncommission rate: " << commissionRate
        << "\nbase salary: " << baseSalary;
}