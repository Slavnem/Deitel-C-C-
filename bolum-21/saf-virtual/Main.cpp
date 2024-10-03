// Slavnem @2024-10-04
// Main

// Kütüphaneler
#include <iostream>
#include <iomanip>
#include <vector>

#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

// Fonksiyon Prototipler
void virtualViaPointer(const Employee * const);
void virtualViaReference(const Employee &);

// main
int main()
{
    // kayan nokta çıkış formatını ata
    cout << fixed << setprecision(2);

    // türetilmiş sınıf nesnelerini oluştur
    SalariedEmployee salariedEmployee(
        "John", "Smith", "111-11-1111", 800);

    CommissionEmployee commissionEmployee(
        "Sue", "Jones", "333-33-3333", 10000, .06);

    BasePlusCommissionEmployee basePlusCommissionEmployee(
        "Bob", "Lewis", "444-44-4444", 5000, .04, 300);

    cout << "Employees processed individually using static binding:\n\n";

    // statik bağlama kullanarak her Employee'nin bilgisini ve kazancını çıkart
    salariedEmployee.print();
    cout << "\nEarned $" << salariedEmployee.earnings() << "\n\n";

    commissionEmployee.print();
    cout << "\nEarned $" << commissionEmployee.earnings() << "\n\n";

    basePlusCommissionEmployee.print();
    cout << "\nEarned $" << basePlusCommissionEmployee.earnings() << "\n\n";

    // üç temel sınıf işaretçisi için vektor oluştur
    vector <Employee *> employees(3);

    // vektörü Employee'ler ile başlat
    employees[0] = &salariedEmployee;
    employees[1] = &commissionEmployee;
    employees[2] = &basePlusCommissionEmployee;

    cout << "Employees processed polymorphically via dynamic binding:\n\n";

    // dinamik bağlama kullanarak her Employee'nin bilgisini ve
    // kazancını yazdırmak için virtualViaPointer çağır
    cout << "Virtual function calls made off base-class pointers:\n\n";

    for(const Employee *employeePtr : employees)
        virtualViaPointer(employeePtr);

    // dinamik bağlama kullanarak her Employee'nin bilgisini ve
    // kazancını yazdırmak virtualViaReference'i çağır
    cout << "Virtual function calls made off base-class references:\n\n";

    for(const Employee *employeePtr : employees)
        virtualViaReference(*employeePtr); // değer aktarımı
}

// dinamik bağlama kullnarak bir temel sınıf referansı dışından
// print ve earnings Employee virtual fonksiyonlarını çağır
void virtualViaPointer(const Employee* const baseClassPtr)
{
    baseClassPtr->print();
    cout << "\nEarned $" << baseClassPtr->earnings() << "\n\n";
}

// dinamik bağlama kullnarak bir temel sınıf referansı dışından
// print ve earnings Employee virtual fonksiyonlarını çağır
void virtualViaReference(const Employee &baseClassRef)
{
    baseClassRef.print();
    cout << "\nEarned $" << baseClassRef.earnings() << "\n\n";
}