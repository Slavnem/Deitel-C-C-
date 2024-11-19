// Slavnem @2024-11-19 05:46 FreeBSD
// Precision ve SetPrecision İle Sayı Ondalık Çıktı Hassasiyeti

// Kütüphaneler
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// main
int main()
{
    double root2 = sqrt(2.0); // 2'nin karekökü hesaplanıyor
    int places; // hassasiyet 0-9 arası değer alabilir
    
    cout << "Square root of 2 with precisions 0-9." << endl
	<< "Precision set by ios_base member function "
	<< "precision:" << endl;

    cout << fixed; // sabit nokta biçimi kullanılacaktır

    // ios_base fonksiyonu olan precision ile karekök ekrana iletiliyor
    for(places = 0; places <= 9; ++places)
    {
	cout.precision(places);
	cout << root2 << endl;
    }

    cout << "\nPrecision set by stream manipulator "
	<< "setprecision:" << endl;

    // her bir rakam için hassasiyeti ayarla ve karekökü tekrar yazdır
    for(places = 0; places <= 9; ++places)
	cout << setprecision(places) << root2 << endl;
}
