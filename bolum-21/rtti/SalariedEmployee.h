// Slavnem @2024-10-04
// SalariedEmployee Sınıfı Tanımı
#ifndef SALARIED_H
#define SALARIED_H

// Kütüphaneler
#include "Employee.h"

// Sınıf
class SalariedEmployee : public Employee
{
    private:
        double weeklySalary; // haftalık maaş

    public:
        SalariedEmployee(const string &, const string &, const string &, double = 0.0);

        void setWeeklySalary(double); // haftalık maaş ata
        double getWeeklySalary() const; // haftalık maaş döndür

        // sanal fonksiyonların üzerine yazma
        virtual double earnings() const; // kazancı hesapla
        virtual void print() const; // nesneyi yazdır
};

#endif // SALARIED_H