// Slavnem @2024-11-12
// FreeBSD
// cin, cin.get()

// Kütüphaneler
#include <iostream>
using namespace std;

// main
int main()
{
    // 80 elemanlı iki adet karakter dizisi oluşturuluyor
    const int SIZE = 80;
    char buffer1[SIZE];
    char buffer2[SIZE];

    // cin kullanarak girişteki karakterler buffer1 içerisine yükleniyor
    cout << "Enter a sentence: " << endl;
    cin >> buffer1;

    // buffer1 içeriği ekrana çıkartılıyor
    cout << "\nThe string read with cin was:" << endl
	<< buffer1 << endl << endl;

    // cin.get kullanarak girişteki karakterler buffer2 içerisine yükleniyor
    cin.get(buffer2, SIZE);

    // buffer2 içeriği ekrana çıkartılıyor
    cout << "The string read with cin.get was:" << endl
	<< buffer2 << endl;
}
