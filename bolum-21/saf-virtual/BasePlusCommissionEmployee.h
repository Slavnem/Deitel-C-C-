// Slavnem @2024-10-04
// BasePlusCommissionRate Sınıfı Tanımı
#ifndef BASEPLUS_H
#define BASEPLUS_H

// Kütüphaneler
#include <string> // C++ Standart String Sınıf
#include "CommissionEmployee.h"

// Sınıf
class BasePlusCommissionEmployee : public CommissionEmployee
{
    private:
        double baseSalary; // Hafta Başı Temel Maaş

    public:
        BasePlusCommissionEmployee(const std::string &, const std::string &,
            const std::string &, double = 0.0, double = 0.0, double = 0.0);
        virtual ~BasePlusCommissionEmployee() { } // sanal yıkıcı

        void setBaseSalary(double); // Taban Maaş Ata
        double getBaseSalary() const; // Taban Maaş Döndür

        // virtual anahtar kelimesi ezmeyi amaçlar
        virtual double earnings() const override; // Kazancı Hesapla
        virtual void print() const override; // Nesneyi Yazdır
};

#endif // BASEPLUS_H