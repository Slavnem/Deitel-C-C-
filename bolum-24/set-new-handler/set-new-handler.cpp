// Slavnem @2024-11-05 22:44 Debian 12
// set_new_handler

// Kütüphaneler
#include <iostream>
#include <new> // set_new_handler
#include <cstdlib> // abort

using namespace std;

// başarısız bellek tahsisini yönet
void customNewHandler()
{
    cerr << "customNewHandler was called";
    abort();
}

// main
int main()
{
    // set_new_handler kullanarak başarısız bellek tahsisini yönetme
    double *ptr[50];

    // bellek tahsisi hatasında customNewHandler fonksiyonu çağırılmalıdır
    set_new_handler(customNewHandler);

    // ptr[i] büyük bellek bloğunu gösterir
    // bellek hatasında customNewHandler fonksiyonu çağırılacak
    for(int i = 0; i < 50; ++i)
    {
        // 50 milyon (50 million)
        ptr[i] = new double[50000000]; // istisna fırlatabilir
        cout << "ptr[" << i << "] points to 50,000,000 new doubles\n";
    }
}