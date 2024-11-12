// Slavnem @2024-11-12
// FreeBSD
// cin.getline()

// Kütüphaneler
#include <iostream>
using namespace std;

// main
int main()
{
    const int SIZE = 80;
    char buffer[SIZE]; // 80 elemanlı bir dizi oluşturuluyor

    // getline fonksiyonu ile buffer giriş karakterleri alınıyor
    cout << "Enter a sentence:" << endl;
    cin.getline(buffer, SIZE);

    // buffer içeriği ekrana çıkartılıyor
    cout << "\nThe sentence entered is:" << endl << buffer << endl;
}
