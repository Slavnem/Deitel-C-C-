// Slavnem @2024-09-05
// Test
#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
using namespace std;

int main()
{
    // bir CommissionEmployee nesnesi oluşturma
    CommissionEmployee employee(
        "Sue", "Jones", "222-22-2222", 10000, .06);

    // ondalık formatta çıktı ayarla
    cout << fixed << setprecision(2);

    // komisyonla çalışan verisi döndür
    cout << "Employee information obtained by get functions: \n"
        << "\nFirst name is " << employee.getFirstname()
        << "\nLast name is " << employee.getLastName()
        << "\nSocial security number is " << employee.getSocialSecurityNumber()
        << "\nGross sales is " << employee.getGrossSales()
        << "\nCommission rate is " << employee.getCommissionRate()
        << endl;

    employee.setGrossSales(8000); // bürüt satış değeri ata
    employee.setCommissionRate(.1); // komisyon oranı ata

    cout << "\nUpdated employee information output by print function: \n" << endl;
    employee.print(); // yeni çalışan bilgisini yazdır

    // çalışan kazancını yazdır
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
}