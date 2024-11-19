// Slavnem @2024-11-19 05:23 - FreeBSD
// Read, Write, Gcount

// Kütüphaneler
#include <iostream>
using namespace std;

// main
int main()
{
    const int SIZE = 80;
    char buffer[SIZE]; // 80 karakterlik bir dizi oluştur

    // read fonksiyonu kullanarak girişteki karakterler buffer'a yazılır
    cout << "Enter a sentence:" << endl;
    cin.read(buffer, 20);

    // write ve gcount kullanılarak buffer'daki karakterler ekrana iletilir
    cout << endl << "The sentence entered was:" << endl;
    cout.write(buffer, cin.gcount());
    cout << endl;
}
