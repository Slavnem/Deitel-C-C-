// Slavnem @2024-10-04
// Main

// Kütüphaneler
#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>

#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

// main
int main()
{
    // kayan nokta çıkış formatını ata
    cout << fixed << setprecision(2);

    // üç temel sınıf işaretçisinin vektörünü oluştur
    vector <Employee *> employees(3);

    // değişik tipteki Employee'lar ile vektörü başlat
    employees[0] = new SalariedEmployee(
        "John", "Smith", "111-11-1111", 800);
    employees[1] = new CommissionEmployee(
        "Sue", "Jones", "333-33-3333", 10000, .06);
    employees[2] = new BasePlusCommissionEmployee(
        "Bob", "Lewis", "444-44-4444", 5000, .04, 300);

    // employees vektöründeki her elemanı çok biçimli olarak işle
    for(Employee *employeeptr : employees)
    {
        employeeptr->print(); // çalışan bilgisi
        cout << endl;

        // işaretçinin tipini dönüştür
        BasePlusCommissionEmployee *derivedPtr =
            dynamic_cast <BasePlusCommissionEmployee *>
                (employeeptr);

        // hangi elemanın BasePlusCommissionEmployee'a
        // işaret ettiğini belirle
        if(derivedPtr != nullptr) // "bir" ilişkisi için doğru
        {
            double oldBaseSalary = derivedPtr->getBaseSalary();
            cout << "Old Base Salary: $" << oldBaseSalary;
            derivedPtr->setBaseSalary(1.10 * oldBaseSalary);
            cout << "New Base Salary With %10 Increase Is: $"
                << derivedPtr->getBaseSalary() << endl;
        }

        cout << "Earned $" << employeeptr->earnings() << "\n\n";
    }

    // vektörün elemanları tarafından işaret edilen nesneleri serbest bırak
    for(const Employee *employeePtr : employees)
    {
        // sınıf ismini çıkart
        cout << "Deleting Object Of " << typeid(*employeePtr).name() << endl;

        delete employeePtr;
    }
}