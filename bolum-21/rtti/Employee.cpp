// Slavnem @2024-10-03
// Employee Sınıfı Fonksiyonlar

// Kütüphaneler
#include <iostream>
#include "Employee.h"

using namespace std;

// Kurucu
Employee::Employee(const string &first, const string &last, const string &ssn)
    : firstName(first), lastName(last), socialSecurityNumber(ssn)
{
    // boş gövde
}

// Ad Değeri Ata
void Employee::setFirstName(const string &first)
{
    firstName = first;
}

// Ad Değeri Döndür
string Employee::getFirstName() const
{
    return firstName;
}

// Soyad Değerini Ata
void Employee::setLastName(const string &last)
{
    lastName = last;
}

// Soyad Değerini Döndür
string Employee::getLastName() const
{
    return lastName;
}

// Sosyal Güvenlik Numarası Ata
void Employee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber = ssn;
}

// Sosyal Güvenlik Numarası Döndür
string Employee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}

// Nesneyi Yazdır
void Employee::print() const
{
    cout << getFirstName() << ' ' << getLastName()
        << "\nSocial Security Number: " << getSocialSecurityNumber();
}