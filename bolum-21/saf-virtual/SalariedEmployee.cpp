// Slavnem @2024-10-04
// SalariedEmployee Sınıfı Fonksiyonlar

// Kütüphaneler
#include <iostream>
#include "SalariedEmployee.h"

using namespace std;

// Kurucu
SalariedEmployee::SalariedEmployee(const string &first,
    const string &last, const string &ssn, double salary)
    : Employee(first, last, ssn)
{
    setWeeklySalary(salary);
}

// Maaşı (Salary) Ata
void SalariedEmployee::setWeeklySalary(double salary)
{
    if(salary < 0.0)
        throw invalid_argument("Weekly Salary Must Be >= 0.0");

    weeklySalary = salary;
}

// Maaşı Döndür
double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalary;
}

// Employee sınıfındaki "earnings" saf sanal fonksiyonunu ezme
// Kazancı Hesapla
double SalariedEmployee::earnings() const
{
    return getWeeklySalary();
}

// Nesneyi Yazdır
void SalariedEmployee::print() const
{
    cout << "Salaried Employee: ";
    Employee::print(); // soyut temel sınıf fonksiyonunu yeniden kullanımı
    cout << "\nWeekly Salary: " << getWeeklySalary();
}