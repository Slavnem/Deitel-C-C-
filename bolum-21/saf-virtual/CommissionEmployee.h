// Slavnem @2024-10-04
// CommissionEmployee Sınıfı Tanımı
#ifndef COMMISSION_H
#define COMMISSION_H

// Kütüphaneler
#include <string> // C++ Standart String Sınıfı
#include "Employee.h"

// Sınıf
class CommissionEmployee : public Employee
{
    private:
        double grossSales; // haftalık brüt satışlar
        double commissionRate; // komisyon oranı

    public:
        CommissionEmployee(const std::string &, const std::string &,
            const std::string &, double = 0.0, double = 0.0);
        virtual ~CommissionEmployee() { } // virtual yıkıcı

        void setCommissionRate(double); // Komisyon Oranı Ata
        double getCommissionRate() const; // Komisyon Oranı Döndür

        void setGrossSales(double); // Brüt Satış Miktarını Ata
        double getGrossSales() const; // Brüt Satış Miktarını Döndür

        // virtual anahtar kelimesi ezmeye niyeti olduğuna işaret eder
        virtual double earnings() const override; // Kazancı Hesapla
        virtual void print() const override; // Nesneyi Yazdır
};

#endif // COMMISSION_H