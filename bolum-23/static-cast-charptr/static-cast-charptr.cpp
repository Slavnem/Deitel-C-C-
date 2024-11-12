// Slavnem @2024-11-12
// static_cast char*

// Kütüphaneler
#include <iostream>
using namespace std;

// main
int main()
{
    const char* const word = "again";

    // char*'ın değeri ekrana yazdırılır. Ardından void*
    // tipine dönüştürülen char*'ın değeri
    // ekrana yazdırılır

    cout << "Value of word is: " << word << endl
    << "Value of static_cast< void * >(word) is: "
    << static_cast< const void * const >(word) << endl;
}
