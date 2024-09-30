// Slavnem @2024-09-05 (Update: @2024-10-01)
// Sınıf İşlemleri
#include <iostream>
#include <stdexcept>
#include "CommissionEmployee.h"
using namespace std;

// kurucu fonksiyon
CommissionEmployee::CommissionEmployee(
    const string &first, const string &last, const string &ssn,
    double sales, double rate)
{
    firstName = first; // doğruluğu kontrol edilmeli
    lastName = last; // doğruluğu kontrol edilmeli
    socialSecurityNumber = ssn; // doğruluğu kontrol edilmeli

    setGrossSales(sales); // bürüt satışı doğrula ve sakla
    setCommissionRate(rate); // komisyon satışını doğrula ve sakla
}

// adı ata
void CommissionEmployee::setFirstName(const string &first)
{
    firstName = first; // doğruluğu kontrol edilmeli
}

// adı döndür
string CommissionEmployee::getFirstName() const
{
    return firstName;
}

// soyadı değerini ata
void CommissionEmployee::setLastName(const string &last)
{
    lastName = last; // doğru girildiği kontrol edilmeli
}

// soyad
string CommissionEmployee::getLastName() const
{
    return lastName;
}

// sosyal güvenlik numarasını ata
void CommissionEmployee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber = ssn; // doğru girildiği kontrol edilmeli
}

// sosyal güvenlik numarasını döndür
string CommissionEmployee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}

// bürüt satış miktarı ata
void CommissionEmployee::setGrossSales(double sales)
{
    if(sales >= 0.0)
        grossSales = sales;
    else
        throw invalid_argument("Yesillik fiyatı 0.0'dan buyuk olmak zorunda");
}

// bürüt satış miktarını döndür
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}

// komisyon oranını ata
void CommissionEmployee::setCommissionRate(double rate)
{
    if(rate >= 0.0 && rate < 1.0)
        commissionRate = rate;
    else
        throw invalid_argument("Komisyon oranı 0.0'dan büyük ve 1.0'dan küçük olmalıdır");
}

// komisyon oranını döndür
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

// kazancı hesapla
double CommissionEmployee::earnings() const
{
    return commissionRate * grossSales;
}

// CommissionEmployee nesnesini yazdır
void CommissionEmployee::print() const
{
    cout << "Commission employee: " << firstName << ' ' << lastName
        << "\nsocial security number: " << socialSecurityNumber
        << "\ngross sales: " << grossSales
        << "\ncommission rate: " << commissionRate;
}