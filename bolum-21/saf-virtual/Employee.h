// Slavnem @2024-10-03
// Employee Sınıfı Tanımı
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string> // C++ Standart String Sınıfı
using namespace std;

// Sınıf
class Employee
{
    private:
        string firstName;
        string lastName;
        string socialSecurityNumber;

    public:
        Employee(const string &, const string &, const string &);

        void setFirstName(const string &); // ad ata
        string getFirstName() const; // ad değerini döndür

        void setLastName(const string &); // soyad ata
        string getLastName() const; // soyad değerini döndür

        void setSocialSecurityNumber(const string &); // ssn ata
        string getSocialSecurityNumber() const; // ssn değerini döndür

        // Employee sınıfınu soyut temel sınıf yapan saf sanal fonksiyonlar
        virtual double earnings() const = 0; // saf sanal
        virtual void print() const; // sanal
};

#endif // EMPLOYEE_H