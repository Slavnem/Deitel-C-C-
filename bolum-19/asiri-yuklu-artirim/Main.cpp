// Slavnem @2024-07-29
// Date sınıf uygulama programı
#include <iostream>
#include "Date.h" // Date sınıfı başlık dosyası
using namespace std;

int main()
{
    Date d1(04, 23, 2004); // 23 Nisan 2004
    Date d2; // varsayılan 1 Ocak 1900

    cout << "d1 : " << d1 << "\nd2 : " << d2;
    cout << "\n\nd1 += 7 : " << (d1 += 7);

    d2.setDate(2, 28, 2008);
    cout << "\n\nd2 : " << d2;
    cout << "\n++d2 esittir " << ++d2 << " (artik yil 29'a izin verir)";
    // Artık yılda Şubat 29 olur
    Date d3(7, 13, 2010);

    cout << "\n\nOnek artirma operatorunun test edilmesi:\n"
        << "d3 esittir " << d3 << endl;
    cout << "d3++ esittir " << d3++ << endl;
    cout << "d3 esittir " << d3 << endl;
}