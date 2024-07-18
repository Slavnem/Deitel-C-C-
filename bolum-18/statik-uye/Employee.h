// Slavnem @2024-07-18
// Bellekteki Employee nesnesinin sayısını izlemek için
// kullanılan static veri üyesine sahip sınıf tanımı
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
    public:
        Employee(const string &, const string &); // yapıcı
        ~Employee(); // yıkıcı
        string getFirstName() const; // adı geriye döndür
        string getLastName() const; // soyadı geriye döndür

        // statik üye fonksiyon
        // oluşturulan nesnelerin sayısını geriye döndür
        static int getCount();
    private:
        string firstName;
        string lastName;

        // static veri
        static int count; // oluşturulan nesnelerin sayısı
};

#endif