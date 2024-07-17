// Slavnem @2024-07-17
// Employee Sınıf Prototipi
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

// Kütüphaneler
#include <string>
#include "Date.h"

using namespace std;

// Employee Sınıfı
class Employee
{
    public:
        Employee(const string &, const string &,
            const Date &, const Date &);
        void print() const;
        ~Employee(); // yıkım işlemi için kullanılır

    private:
        string firstName; // birleşimi üye nesne
        string lastName; // birleşimi üye nesne
        const Date birthDate; // birleşimi üye nesne
        const Date hireDate; // birleşimi üye nesne
};

#endif