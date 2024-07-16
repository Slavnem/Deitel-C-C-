// Slavnem @2024-07-16
// Test

// Kütüphaneler
#include <iostream>
#include "TimeTick.h"

using namespace std;

// main
int main()
{
    // saati hatalı, dakikası normal, saniyesi otomatik
    TimeTick timeticker1(23, 54);

    // küresel biçimde saati çıktı vermek
    timeticker1.printUniversal();

    // saniyeyi arttırmak
    for(int i = 0; i < 3700; i++)
    {
        timeticker1.tick();
    }

    // yeni halini standart çıktı olarak vermek
    timeticker1.printStandard();
}