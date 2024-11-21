// Slavnem @2024-11-21 07:18 FreeBSD
// flags

// Kütüphaneler
#include <iostream>
using namespace std;

// main
int main()
{
    int integerValue = 1000;
    double doubleValue = 0.0947628;

    // flags değerini, int veya double değerleri ekrana bastırır (orjinal biçim)
    cout << "The value of the flags variable is: " << cout.flags()
	<< "\nPrint int and double in original format:\n"
	<< integerValue << '\t' << doubleValue << endl << endl;

    // cout flags fonksiyonu kullanılarak orijinal biçim kaydediliyor
    ios_base::fmtflags originalFormat = cout.flags();
    cout << showbase << oct << scientific; // biçim değiştiriliyor

    // flags değerini, int ve double değerleri ekrana çıkartır (yeni biçim)
    cout << "flags variable value: " << cout.flags()
	<< "\nPrint int and double in new format:\n"
	<< integerValue << '\t' << doubleValue << endl << endl;

    cout.flags(originalFormat); // biçimi orijinal hale getir

    // flags değerini, int ve double değerleri ekrana çıkartır (orjinal biçim)
    cout << "The restored value of the flags variable is: " << cout.flags()
	<< "\nPrint values in original format again:\n"
	<< integerValue << '\t' << doubleValue << endl;
}
