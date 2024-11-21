// Slavnem @2024-11-21 07:27 FreeBSD
// failure

// Kütüphaneler
#include <iostream>
using namespace std;

// main
int main()
{
    int integerValue;

    // cin fonksiyonlarının sonuçlarını göster
    cout << "Before a bad input operation:"
	<< "\ncin.rdstate(): " << cin.rdstate()
	<< "\ncin.eof(): " << cin.eof()
	<< "\ncin.fail(): " << cin.fail()
	<< "\ncin.bad(): " << cin.bad()
	<< "\ncin.good(): " << cin.good()
	<< "\nExpects and integer, but enter a character: ";

    cin >> integerValue; // burada klavyeden bir karakter giriniz
    cout << endl;

    // hatalı girişten sonra cin fonksiyonlarının çıktıları
    cout << "After a bad input operation:"
	<< "\ncin.rdstate(): " << cin.rdstate()
	<< "\ncin.eof(): " << cin.eof()
	<< "\ncin.fail(): " << cin.fail()
	<< "\ncin.bad(): " << cin.bad()
	<< "\ncin.good(): " << cin.good() << endl << endl;

    cin.clear(); // akış temizleniyor

    // cin fonksiyonlarının çıktıları
    cout << "After cin.clear()" << "\ncin.fail(): " << cin.fail()
	<< "\ncin.good(): " << cin.good() << endl;
}
