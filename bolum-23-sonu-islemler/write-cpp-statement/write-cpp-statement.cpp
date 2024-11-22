// Slavnem @2024-11-22 06:00 FreeBSD
// Write a C++ Statement

// Kütüphaneler
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// main
int main()
{
    string name;
    cout << "Adınızı giriniz: ";
    cin >> name;
    cout << endl;

    char* myString;
    cout << "myString Addr: " << &myString << endl;

    double number = 13245768;
    cout << '\n' <<uppercase << scientific << number << endl;

    int* integerPtr;
    cout << "\nintegerPtr Addr: " << &integerPtr << endl;

    int number2 = 123456789;
    cout << "\nNumber: " << dec << number2
	<< "\nOctal: " << oct << number2
	<< "\nHexadecimal: " << hex << number2 << endl;

    float* floatPtr;
    cout << "\nfloatPtr value: " << *floatPtr << endl;

    cout << "Number: " << showbase << dec <<setw(12) << setfill('*') << number2 << endl;

    cout << endl;
    cout.put('0').put('K');
    cout << endl;

    char charValue;
    cout << "\nBir karakter giriniz: " << endl;
    cin.ignore(); // tampon temizleme
    cin.get(charValue);
    cout << "Girilen karakter: " << charValue << endl;

    const int line_size = 50;
    char line[line_size];
    cout << '\n' << line_size << "adet karakter giriniz: " << endl;
    cin.read(line, line_size);
    cout << "\nOkunan karakter miktarı: " << cin.gcount()
	<< "\nMetin: ";
    cout.write(line, line_size);
    cout << endl;

    cout << "\nMevcut ondalıklı hassasiyet değeri: " << cout.precision() << endl;
}
