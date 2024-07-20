// Slavnem @2024-07-21
// Aşırı yüklü akış ekleme ve çıkarım
// operatörlerinin PhoneNumber için kullanımı

// Kütüphaneler
#include <iomanip>
#include "PhoneNumber.h"

using namespace std;

// Aşırı yüklü akım girdirim işleci eğer
// cout << somePhoneNumber
// şeklinde çağırılırsa, üye fonksiyon olamaz
ostream &operator<<(ostream &output, const PhoneNumber &number)
{
    output << "(" << number.areaCode << ") "
        << number.exchange << "-" << number.line;
    return output; // cout << a << b << c olması için izin verir
}

// Aşırı yüklü akış çıkarım operatörü eğer
// cin >> somePhoneNumber
// şeklinde çağırılırsa, üye fonksiyon olamaz
istream &operator>>(istream &input, PhoneNumber &number)
{
    input. ignore(); // parantez aç işaretini atla
    input >> setw(3) >> number.areaCode; // operatör kodu
    input. ignore(2); // parantez kapa işaretini atla ve boşluk
    input >> setw(3) >> number.exchange; // alan kodu
    input. ignore(); // tireyi (-) atla
    input >> setw(4) >> number.line; // abone kodu
    return input; // cin >> a >> b >> c, işlemlerine izin verir
}