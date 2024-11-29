// Slavnem @2024-11-29 18:15 Debian 12
// Decimal, Octal, Hexadecimal Read

// Kütüphaneler
#include <iostream>
#include <iomanip>

using namespace std;

// main
int main()
{
    int number; // sayı

    cout << "Onluk sistemde sayı giriniz: ";
    cin >> dec >> number;
    cout << "Girdiğiniz sayı: " << dec << number << endl;

    cout << "Sekizlik sistemde sayı giriniz: ";
    cin >> oct >> number;
    cout << "Girdiğiniz sayı: " << dec << number << endl;

    cout << "On Altılık sistemde sayı giriniz: ";
    cin >> hex >> number;
    cout << "Girdiğiniz sayı: " << dec << number << endl;
}