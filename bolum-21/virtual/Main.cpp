// Slavnem @2024-10-01
// Main

// Kütühpaneler
#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

// main
int main()
{
    // temel sınıf nesnesi oluştur
    CommissionEmployee commissionEmployee(
        "Sue", "Jones", "222-22-2222", 10000, .06
    );

    // temel sınıf işaretçisi oluştur
    CommissionEmployee *commissionEmployeePtr = 0;

    // türetilmiş sınıf nesnesi oluştur
    BasePlusCommissionEmployee basePlusCommissionEmployee(
        "Bob", "Lewis", "333-33-3333", 5000, .04, 300
    );

    // türetilmiş sınıf işaretçisi oluştur
    BasePlusCommissionEmployee* basePlusCommissionEmployeePtr = 0;

    // ondalıklı sayının formatını düzenle
    cout << fixed << setprecision(2);

    // statik bağlama ile nesnelerin çıktısı
    cout << "Invoking print function on base-class and derived-class "
        << "\nobjects with static binding\n\n";

    commissionEmployee.print(); // statik bağlama
    cout << "\n\n";

    basePlusCommissionEmployee.print(); // statik bağlama

    // dinamik bağlama ile nesne çıktısı
    cout << "\n\nInvoking print function on base-class and "
        << "derived-class \nobjects with dynamic binding";

    // base-class işaretçisine base-class objesini işaret etme ve çıktı verme
    commissionEmployeePtr = &commissionEmployee;
    cout << "\n\nCalling virtual function print with base-class pointer"
        << "\nto base-class object invokes base-class "
        << "print function:\n\n";
    commissionEmployeePtr->print();

    // derived-class işaretçisine derived-class objesini işaret etme ve çıktı verme
    basePlusCommissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "\n\nCalling virtual function print with derived-class pointer"
        << "\nto derived-class object invokes derived-class "
        << "print function:\n\n";
    basePlusCommissionEmployeePtr->print();

    // base-class işaretçisine derived-class objesini işaret etme ve çıktı verme
    commissionEmployeePtr = &basePlusCommissionEmployee;
    cout << "\n\nCalling virtual function print with base-class pointer"
        << "\nto derived-class object invokes derived-class "
        << "print function:\n\n";

    // polymorphism çok biçimlilik BasePlusCommissionEmployee'nin print fonksiyonu
    // çağırılır, türetilmiş sınıf nesnesine temel sınıf işaretçisi
    commissionEmployeePtr->print();
    cout << endl;
}