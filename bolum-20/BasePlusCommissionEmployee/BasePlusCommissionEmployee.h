// Slavnem @2024-09-08
// BasePlusCommissionEmployee Sınıfı Tanımı
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // C++ standard string sınıfı
using namespace std;

class BasePlusCommissionEmployee
{
    public:
        BasePlusCommissionEmployee(const string &, const string &,
            const string &, double = 0.0, double = 0.0, double = 0.0);

        void setFirstName(const string &); // Ad değerini ata
        string getFirstName() const; // Ad değerini döndür

        void setLastName(const string &); // Soyad değerini ata
        string getLastName() const; // Soyad değerini ata

        void setSocialSecurityNumber(const string &); // SSN ata
        string getSocialSecurityNumber() const; // SSN döndür

        void setGrossSales(double); // Bürüt satış miktarını ata
        double getGrossSales() const; // Bürüt satış miktarını döndür

        void setCommissionRate(double); // Komisyon oranını ata
        double getCommissionRate() const; // Komisyon miktarını döndür

        void setBaseSalary(double); // Taban maaşı ata
        double getBaseSalary() const; // Taban maaşı döndür

        double earnings() const; // Kazancı hesapla
        void print() const; // Nesneyi yazdır
    private:
        string firstName;
        string lastName;
        string socialSecurityNumber;
        double grossSales; // Bürüt haftalık satış
        double commissionRate; // Komisyon yüzdesi
        double baseSalary; // Taban maaş
};

#endif