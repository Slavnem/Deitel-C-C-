// Slavnem @2024-09-11
// Commission Employee Sınıfı
#ifndef COMMISSION_H
#define COMMISSION_H

#include <string> // C++ Standart String Sınıfı
using namespace std;

class CommissionEmployee
{
    public:
        CommissionEmployee(const std::string &, const std::string &,
            const std::string &, double = 0.0, double = 0.0);

        void setFirstname(const std::string &); // adı değerini ata(set)
        std::string getFirstname() const; // adı döndür

        void setLastName(const std::string &); // soyadı değerini ata
        std::string getLastName() const; // soyadı değerini döndür

        void setSocialSecurityNumber(const std::string &); // SSN ata
        std::string getSocialSecurityNumber() const; // SSN döndür

        void setGrossSales(double); // bürüt satış miktarını ata
        double getGrossSales() const; // bürüt satış miktarını döndür

        void setCommissionRate(double); // komisyon oranını ata(yüzde olarak)
        double getCommissionRate() const; // komisyon oranını döndür

        double earnings() const; // kazancı hesapla
        void print() const; // CommissionEmployee nesnesini yazdır
    protected:
        std::string firstName;
        std::string lastName;
        std::string socialSecurityNumber;
        double grossSales; // bürüt haftalık satış
        double commissionRate; // komisyon yüzdesi
};

#endif