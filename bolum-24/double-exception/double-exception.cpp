// Slavnem @2024-11-05 00:21 Debian 12
// Double Exception

// Kütüphaneler
#include <iostream>
#include <exception>
using namespace std;

// Bir istisna fırlat, yakala, tekrar fırlat
void throwException()
{
    // istisnayı fırlat ve hemen yakala
    try
    {
        cout << " throwException fonksiyonu bir istisna firlatiyor\n";
        throw exception(); // istisnayı fırlat
    }
    catch(exception &) // istisnayı yönet
    {
        cout << " Istisna throwException icinde tutuldu"
            << "\n throwException fonksiyonu yeniden istisna firlatiyor";
        throw; // istisnayı tekrar fırlat
    }

    cout << "Bu cikti vermemeli\n";
}

// main
int main()
{
    // istisna fırlat
    try
    {
        cout << "\nmain throwException fonksiyonunu uyandiriyor";
        throwException();
        cout << "Bu cikti vermemeli\n";
    }
    catch(exception &) // istisnayı tut
    {
        cout << "\n\nIstisna main icinde tutuldu";
    }
    
    cout << "Program kontrolu main icinde yakaladiktan sonra devam ediyor\n";
}