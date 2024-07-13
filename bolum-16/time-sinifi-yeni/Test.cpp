// Slavnem @2024-07-14
// Test

// Kütüphaneler
#include <iostream>
#include <stdexcept>
#include "Time.h"

using namespace std;

// main
int main()
{
    Time t1; // tüm bağımsız değişkenler varsayılan
    Time t2(2); // saat belirtilmiş, dakika ve saniye varsayılan
    Time t3(21, 34); // saat ve dakika belirtilmiş, saniye varsayılan
    Time t4(12, 25, 42); // saat, dakika ve saniye belirtilen

    cout << "t1: tüm bağımsız değişkenler varsayılan\n";
    t1.printUniversal(); // 00:00:00
    cout << "\n";
    t1.printStandard(); // 12:00.00 AM

    cout << "\n\nt2: saat belirtilmiş, dakika ve saniye varsayılan\n";
    t2.printUniversal(); // 02:00:00
    cout << "\n";
    t2.printStandard(); // 2:00:00 AM

    cout << "\n\nt3: saat belirtilmiş, dakika ve saniye varsayılan\n";
    t3.printUniversal(); // 21:34:00
    cout << "\n";
    t3.printStandard(); // 9:34:00 PM

    cout << "\n\nt4: saat belirtilmiş, dakika ve saniye varsayılan\n";
    t4.printUniversal(); // 12:25:42
    cout << "\n";
    t4.printStandard(); // 12:25:42 PM

    // ge.ersiz değerler ile t5 başlatma girişimi
    try
    {
        Time t5(27, 74, 99); // belirtilen tüm değerler hatalı
    }
    catch(invalid_argument &e)
    {
        cout << "\n\nt5 başlatılırken hata: " << e.what() << endl;
    }
}