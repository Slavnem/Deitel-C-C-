// Slavnem @2024-07-31
// Test

// Kütüphaneler
#include <iostream>
#include "Polinom.h"

using namespace std;

// main
int main()
{
    Polinom pol1(4, 5);
    Polinom pol2(2, 3);
    
    cout << "pol1: " << pol1
        << "pol2: " << pol2
        << endl;

    cout << "pol1 + pol2 eşittir " << (pol1 + pol2)
        << "pol1 - pol2 eşittir " << (pol1 - pol2)
        << "pol1 * pol2 eşittir " << (pol1 * pol2)
        << endl;

    cout << "pol1 += pol2 eşittir " << (pol1 += pol2)
        << "pol1 *= pol2 eşittir " << (pol1 *= pol2)
        << endl;
}