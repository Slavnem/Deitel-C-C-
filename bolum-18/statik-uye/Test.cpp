// Slavnem @2024-07-18
// Test

// Kütüphaneler
#include <iostream>
#include "Employee.h"

using namespace std;

// main
int main()
{
    // hiçbir nesne yok, getCount statik üye fonksiyonuna
    // erişme için sınıf adını ve ikili kapsam çözünürlük işlecini kullan
    cout << "Herhangi bir çalışan nesnesi oluşturulmadan önce çalışan sayısı: "
        << Employee::getCount() << endl; // sınıf adını kullan

    // aşağıdaki kapsam main sonlanmadan önce
    // Employee nesnelerini oluşturur ve yok eder
    {
        Employee e1("Susan", "Baker");
        Employee e2("Robert", "Jones");

        // iki nesne mevcut, getCount statik üye fonksiyonunu
        // sınıf adı ve ikili kapsam çözünürlük işlecini tekrar çağırır
        cout << "Nesneler oluşturulduktan sonra çalışan nesnesi sayısı: "
            << Employee::getCount();

        cout << "\n\nEmployee 1: " << e1.getFirstName() << " " << e1.getLastName()
            << "\nEmployee 2: " << e2.getFirstName() << " " << e2.getLastName() << "\n\n";
    }

    // hiçbir nesne var olmaz, bu nedenle statik üye fonksiyonu getCount'u
    // sınıf adı ve kapsam çözünürlük işlecini kullanarak tekrar çağırır
    cout << "\nNesneler silindikten sonra çalışan nesnesi sayısı: "
        << Employee::getCount() << endl;
}