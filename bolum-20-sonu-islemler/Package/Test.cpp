// Slavnem @2024-09-19
// Test

// Kütüphaneler
#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;

// main
int main()
{
    // test amaçlı
    Package mainpack("My Sender", "Türkiye/İstanbul/Ataşehir", "Türkiye", "İstanbul", 34758,
        "My Receiver", "United States/New York", "US", "NYC", 323145252,
        23.5);

    // yenilerini oluştur
    TwoDayPackage tupac(mainpack);
    OvernightPackage fiftycent(mainpack);

    // çıktılar
    cout << "\n====================\n"
        << "MainPack Package:\n" << mainpack;

    cout << "\n====================\n"
        << "TwoDay Package:\n" << tupac;

    cout << "\n====================\n"
        << "Overnight Package:\n" << fiftycent;

    return 0;
}