// Slavnem @2024-12-05 22:27 Debian 12
// Memory bad_alloc Exception

// Kütüphaneler
#include <iostream>
#include <new>  // bad_alloc sınıfı burada tanımlıdır
using namespace std;

// main
int main()
{
    double *ptr[50];

    // ptr[i] büyük bellek alanı için işaretçi
    try
    {
        // ptr[i] için bellek ayır. başarısız new, bad_alloc fırlatır
        for(int i = 0; i < 50; ++i)
        {
            // 50 milyon (50 million)
            ptr[i] = new double[50000000]; // istisna fırlatabilir
            cout << "ptr[" << i << "] points to 50,000,000 new doubles\n";
        }
    }
    catch(bad_alloc &memoryAllocationException)
    {
        cerr << "Exception occured: "
            << memoryAllocationException.what() << endl;
    }
}