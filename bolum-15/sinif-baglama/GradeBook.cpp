// Slavnem @2024-07-12
// GradeBook Fonksiyonları

// Kütüphaneler
#include <iostream>
#include "GradeBook.h"

using namespace std;

// yapıcı courseName değişkenini argüman olarak
// gelen karakter dizisiyle ilklendir
GradeBook::GradeBook(string name)
{
    // courseName değerini doğrula ve kaydet
    setCourseName(name);
}

// kurs adını atayan fonksiyon
// kurs adının en fazla 25 karakter olmasını garani eder
void GradeBook::setCourseName(string name)
{
    // name değeri 25 ya da daha az karakterlere sahiptir
    if(name.length() <= 25)
        courseName = name; // kurs adını nesne içerisinde sakla

    if(name.length() > 25)
    {
        // 0'dan başla 25 karakter uzunluğunda
        courseName = name.substr(0, 25);

        cout << "Ad \"" << name << "\" en fazla karakter sinirini (25) asti\n"
            << "courseName ilk 25 karakter ile sinirlandirildi" << endl;
    }
}

// kurs adını geri döndüren fonksiyon
string GradeBook::getCourseName()
{
    // nesneye ait courseName değerini döndür
    return courseName;
}

// GradeBook kullanıcısına hoşgeldin mesajı görüntüle
void GradeBook::displayMessage()
{
    cout << getCourseName() << "\nicin GradeBook'a hosgeldiniz!" << endl;
}