// Slavnem @2024-11-12
// FreeBSD
// get, put, eof

// Kütüphaneler
#include <iostream>
using namespace std;

// main
int main()
{
    int character; // int kullanın çünkü EOF char ile temsil edilemez

    // kullanıcının bir satır yazı girmesini ister
    cout << "Before input, cin.eof() is " << cin.eof() << endl
    << "Enter a sentence followed by end-of-file: " << endl;

    while((character = cin.get()) != EOF)
	cout.put(character);

    // dosya sonu (EOF) karakteri ekrana bastırılır
    cout << "\nEOF in this system is: " << character << endl;
    cout << "After input of EOF, cin.eof() is " << cin.eof() << endl;
}
