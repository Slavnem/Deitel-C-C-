// Slavnem @2024-11-04 23:46 Debian 12
// Test

// Kütüphaneler
#include <iostream>
#include "DivideByZeroException.h"
using namespace std;

// bölmeyi uygula ve sıfıra bölme istisnası oluşturma
// DivideByZeroException nesnesini fırlat
double quotient(int numerator, int denominator)
{
    // payda sıfırsa DivideByZeroException fırlat
    if(denominator == 0)
        throw DivideByZeroException();

    // bölüm sonucunu döndür
    return static_cast<double>(numerator) / denominator;
}

// main
int main()
{
    int number1; // kullanıcı pay girdisi
    int number2; // kullanıcı payda girdisi
    double result; // bölüm sonucu

    cout << "2 tam sayi giriniz (EOF sonlandirma icin): ";

    // kullanıcıdan iki tamsayı girmesini iste
    while(cin >> number1 >> number2)
    {
        // try bloğu istisna fırlatabilecek kod
        // ve istisna oluşursa çalışmayacak kod içermekte
        try
        {
            result = quotient(number1, number2);
            cout << "Bolum sonucu: " << result << endl;
        }
        catch(DivideByZeroException &divideByZeroException)
        {
            cout << "Istisna olustu"
                << divideByZeroException.what() << endl;
        }

        cout << "\n2 tam sayi giriniz (EOF sonlandirma icin): ";
    }

    cout << endl;
}