// Slavnem @2024-07-11
// Ana İşlem Dosyası

// Kütüphaneler
#include <iostream>
#include "GradeBook.h"

using namespace std;

// main
int main()
{
    // iki adet GradeBook nesnesi oluştur
    GradeBook gradeBook1("CS101 C++ Programlamaya Giris");
    GradeBook gradeBook2("CS102 C++ ile Veri Yapilari");

    // herbir GradeBook nesnesi için courseName
    // başlangıç değerini görüntüle
    cout << "gradeBook1 kursu: " << gradeBook1.getCourseName()
        << "\ngradeBook2 kursu: " << gradeBook2.getCourseName()
        << endl;
}