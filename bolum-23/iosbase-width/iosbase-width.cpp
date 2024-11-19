// Slavnem @2024-11-19 06:00 FreeBSD
// ios_base width

// Kütüphaneler
#include <iostream>
using namespace std;

// main
int main()
{
    int widthValue = 4;
    char sentence[10];

    cout << "Enter a sentence:" << endl;
    cin.width(5); // girilen 5 karakterden sadece 5 tanesini oku

    // alanın genişliğini belirler ve bu genişliğe göre karakterleri çıkarır
    while(cin >> sentence)
    {
	cout.width(widthValue++);
        cout << sentence << endl;
	cin.width(5); // girişten 5 karakter daha alır
    }
}
