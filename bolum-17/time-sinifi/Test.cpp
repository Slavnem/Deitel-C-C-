// Slavnem @2024-07-13
// Test

// Kütüphaneler
#include <iostream>
#include "Time.h"

using namespace std;

// main
int main()
{
    Time t; // Time sınıfının t nesnesi

    // t nin başlangıç değerlerinin çıktısı
    cout << " Başlangıç evrensel saat ";
    t.printUniversal(); // 00:00:00
    
    cout << "\nBaşlangıç standart saat ";
    t.printStandard(); // 12:00:00 AM

    t.setTime(13, 27, 6); // saati değiştirme

    // t nin yeni değerlerinin çıktısı
    cout << "\n\nZaman tanımından sonra küresel zaman ";
    t.printUniversal();

    cout << "\nZaman tanımından sonra standart zaman ";
    t.printStandard();

    // geçersiz değerler ile saati getirmeye çalışma
    try
    {
        t.setTime(99, 99, 99); // tüm değerler aralığın dışında
    }
    catch(invalid_argument &e)
    {
        cout << "İstisna: " << e.what() << endl << endl;
    }

    // geçersiz değerleri belirttikten sonra t nin değerlerinin
    cout << "\n\nGeçersiz ayarlar denendikten sonra:"
        << "\nEvrensel saat: ";
    t.printUniversal(); // 00:00:00

    cout << "\nStandart zaman: ";
    t.printStandard();
    cout << endl;
}