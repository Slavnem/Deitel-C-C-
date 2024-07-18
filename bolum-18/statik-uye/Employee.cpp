// Slavnem @2024-07-18
// Employee sınıfı üye fonksiyon tanımları

// Kütüphaneler
#include <iostream>
#include "Employee.h"

using namespace std;

// static veri üyesini global isim uzayı kapsamında tanımla ve ilklendir
int Employee::count = 0; // static anahtar kelimesini kullanamaz

// oluşturulan Employee nesnelerinin sayısını geriye döndüren
// static üye fonksiyonu tanımla (Employee.h içerisinde static olarak bildirildi)
int Employee::getCount()
{
    return count;
}

// static olmayan veri üyelerinin static olan
// count veri üyesini artıran yapıcı
Employee::Employee(const string &first, const string &last)
    :   firstName(first), lastName(last)
{
    ++count; // statik olan personel sayısını arttır
    cout << firstName << ' ' << lastName << " icin Employee yapıcısı kullanıldı" << endl;
}

// dinamik olarak ayrılan bellek bölgesini serbest bırakan yıkıcı
Employee::~Employee()
{
    cout << firstName << ' ' << lastName << " icin ~Employee() kullanıldı" << endl;
    --count; // statik olan personel sayısını azalt
}

// personel adını geriye döndür
string Employee::getFirstName() const
{
    return firstName;
}

// personel soyadını geriye döndür
string Employee::getLastName() const
{
    return lastName;
}