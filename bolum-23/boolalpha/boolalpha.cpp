// Slavnem @2024-11-21 07:09 FreeBSD
// boolalpha

// Kütüphaneler
#include <iostream>
using namespace std;

// main
int main()
{
    bool booleanValue = true;

    // booleanValue değerini varsayılan true olarak ekrana çıkartılıyor
    cout << "booleanValue: " << booleanValue << endl;

    // booleanValue değeri boolapha kullanıldıktan sonra çıkartılıyor
    cout << "booleanValue (after using boolalpha) is: "
	<< boolalpha << booleanValue << endl << endl;

    cout << "switch booleanValue and use noboolalpha" << endl;
    booleanValue = false; // booleanValue değeri değiştiriliyor
    cout << noboolalpha << endl; // noboolalpha kullanılıyor

    // booleanValue içerisindeki false değeri varsayılan olarak bastırılır
    cout << "booleanValue is: " << booleanValue << endl;

    // booleanValue değeri boolalpha kullanıldıktan sonra bastırılır
    cout << "booleanValue (after using boolalpha) is: "
	<< boolalpha << booleanValue << endl;
}
