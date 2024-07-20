// Slavnem @2024-07-21
// PhoneNumber sınıfının akış girdinin ve çıkarım
// operatörlerinin aşırı yüklenmelerini gösterir

// Kütüphaneler
#include <iostream>
#include "PhoneNumber.h"

using namespace std;

// main
int main()
{
    PhoneNumber phone; // phone nesnesi oluştur

    cout << "Gösterildiği gibi telefon numarası giriniz (123) 456-7890:" << endl;

    // cin > phone, operator>> 'ı bilinçsiz olarak çağırır ve
    // üye olmayan fonksiyon çağrısı operator>>(cin, phone) üretir
    cin >> phone;

    cout << "Girilen telefon numarası: ";

    // cin >> phone, operator<< 'ı bilinçsiz olarak çağırır ve
    // üye olmayan fonksiyon çağrısı operator<<(cout, phone) üretir
    cout << phone << endl;
}