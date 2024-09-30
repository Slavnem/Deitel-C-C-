// Slavnem @2024-10-01
// BasePlusCommissionEmployee Sınıf Tanımı
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // C++ Standard String Sınıfı
#include "CommissionEmployee.h" // CommissionEmployee Sınıfı

using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee
{
    private:
        double baseSalary; // taban maaş

    public:
        BasePlusCommissionEmployee(const string &, const string &, const string &,
            double = 0.0, double = 0.0, double = 0.0);

        void setBaseSalary(double); // taban maaşı ata
        double getBaseSalary() const; // taban maaşı getir

        virtual double earnings() const; // kazancı hesapla
        virtual void print() const; // nesneyi yazdır
};

#endif // BASEPLUS_H