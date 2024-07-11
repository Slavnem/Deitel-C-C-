// Slavnem @2024-07-12
// GradeBook Sınıfını Test Etmek

// Kütüphaneler
#include <iostream>
#include "GradeBook.h"

using namespace std;

// main
int main()
{
    // iki adet GraeBook nesnesi oluştur
    // ilk gradeBook1 nesnesi kurs adı çok uzun
    GradeBook gradeBook1("CS101 C++ Ile Programlamaya Giris");
    GradeBook gradeBook2("CS102 C++ Veri Yapilari");

    // Her iki GradeBook nesnesi kurs adını görüntüle
    cout << "gradeBook1 kurs adi: " << gradeBook1.getCourseName()
        << "\ngradeBook2 kurs adi: " << gradeBook2.getCourseName()
        << endl;
}