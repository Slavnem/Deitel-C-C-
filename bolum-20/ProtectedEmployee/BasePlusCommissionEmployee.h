// Slavnem @2024-09-11
// BasePlusCommissionEmployee Sınıfı
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // C++ Standart String Kütüphanesi
#include "CommissionEmployee.h" // CommissionEmployee Sınıfı
using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee
{
    public:
        BasePlusCommissionEmployee(const string &, const string &, const string &,
            double = 0.0, double = 0.0, double = 0.0);

        void setBaseSalary(double); // Taban Maaş Ata
        double getBaseSalary() const; // Taban Maaş Getir

        double earnings() const; // Kazancı Hesapla
        void print() const;  // Nesneyi Yazdır
    private:
        double baseSalary; // Taban Maaş
};

#endif