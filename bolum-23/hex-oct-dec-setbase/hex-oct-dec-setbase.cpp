// Slavnem @2024-11-19 05:37 FreeBSD
// Hex, Oct, Dec ve Setbase Akış Manipülatörleri

// Kütüphaneler
#include <iostream>
#include <iomanip>

using namespace std;

// main
int main()
{
    int number;

    cout << "Enter a decimal number: ";
    cin >> number; // giriş değeri

    // 16'lık tabanda sayılar yazmak için hex kullanılıyor
    cout << number << " in hexadecimal is: " << hex
	<< number << endl;

    // 8'lik tabanda sayılar yazmak için oct kullanılıyor
    cout << dec << number << " in octal is: "
	<< oct << number << endl;

    // 10'luk sayıları gösterebilmek için setbase kullanılıyor
    cout << setbase(10) << number << " in decimal is: "
	<< number << endl;
}
