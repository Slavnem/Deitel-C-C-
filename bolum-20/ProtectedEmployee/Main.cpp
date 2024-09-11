// Slavnem @2024-09-11
// Test
#include <iostream>
#include <iomanip>
#include "BasePlusCommissionEmployee.h"

using namespace std;

int main()
{
    // sınıf nesnesi oluşturma ve ilk değer atama
    BasePlusCommissionEmployee employee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);

    // ondalık sayı yazdırma formatı ayarla
    cout << fixed << setprecision(2);

    // komisyonla çalışan bilgisi ata
    cout << "Employee information obtained by get functions: \n"
        << "\nFirst name is " << employee.getFirstname()
        << "\nLast name is " << employee.getLastName()
        << "\nSocial security number is " << employee.getSocialSecurityNumber()
        << "\nGross sales is " << employee.getGrossSales()
        << "\nCommission rate is " << employee.getCommissionRate()
        << "\nBase salary is " << employee.getBaseSalary()
        << endl;

    employee.setBaseSalary(1000); // taban maaş ata

    cout << "\nUpdated employee information output by print function: \n" << endl;
    employee.print(); // yeni çalışan bilgisini yazdır

    // çalışan kazancını yazdır
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
}