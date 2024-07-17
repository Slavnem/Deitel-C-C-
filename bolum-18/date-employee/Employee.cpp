// Slavnem @2024-07-17
// Employee Sınıfı İşleyicileri

// Kütüphaneler
#include <iostream>
#include "Employee.h"
#include "Date.h"

using namespace std;

// yapıcı, ilklendirme değerlerini üye nesnelerin
// yapıcılarına geçirmek üzere üye ilklendirme
// listesini kullanır
Employee::Employee(const string &first, const string &last,
    const Date &dateOfBirth, const Date &dateOfHire)
    :   firstName(first), // firstName'i ilklendir
        lastName(last), // lastName'i ilklendir
        birthDate(dateOfBirth), // birthDate'i ilklendir
        hireDate(dateOfHire) // hireDate'i ilklendir
{
    // yapıcı çağırıldığında Employee nesnesini görüntüle
    cout << "Employee nesnesi kurucusu: "
        << firstName << ' ' << lastName << endl;
}

// Employee nesnesini yazdır
void Employee::print() const
{
    cout << lastName << ", " << firstName << " İşe Alındı: ";
    hireDate.print();
    cout << " Doğum Günü: ";
    birthDate.print();
    cout << endl;
}

// yıkıcı çağırıldığında Employee nesnesini görüntüle
Employee::~Employee()
{
    cout << "Employee nesnesi yıkıcısı: "
        << lastName << ", " << firstName << endl;
}