// Slavnem @2024-09-30
// CommissionEmployee Sınıf Tanımı
#ifndef COMMISSION_H
#define COMMISSION_H

#include <string> // C++ Standard String Sınıfı
using namespace std;

class CommissionEmployee
{
    private:
        string firstName;
        string lastName;
        string socialSecurityNumber;

        double grossSales; // bürüt haftalık satış
        double commissionRate; // komisyon oranı

    public:
        CommissionEmployee(const string &, const string &, const string &,
            double = 0.0, double = 0.0);

        void setFirstName(const string &); // ad değerini ata
        string getFirstName() const; // ad değerini getir

        void setLastName(const string &); // soyad değerini ata
        string getLastName() const; // soyad değerini getir

        void setSocialSecurityNumber(const string &); // sosyal güvenlik nu ata
        string getSocialSecurityNumber() const; // sosyal güvenlik nu getir

        void setGrossSales(double); // bürüt satış miktarını ata
        double getGrossSales() const; // bürüt satış miktarını getir

        void setCommissionRate(double); // komisyon miktarını ata
        double getCommissionRate() const; // komisyon miktarını getir

        virtual double earnings() const; // kazancı hesapla
        virtual void print() const; // nesneyi yazdır
};

#endif // COMMISSION_H