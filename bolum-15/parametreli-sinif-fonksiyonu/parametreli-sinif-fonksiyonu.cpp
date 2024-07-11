// Slavnem @2024-07-11
// Parametreli Sınıf Fonksiyonu Oluşturmak

// Kütüphaneler
#include <iostream>
#include <string>

using namespace std;

// GradeBook sınıf tanımı
class GradeBook
{
    public:
        // GradeBook kullanıcısna hoşgeldin mesajı gösteren fonksiyon
        void displayMessage(string courseName)
        {
            cout << courseName << " icin GradeBook'a Hosgeldiniz!" << endl;
        }
};

// main
int main()
{
    string nameOfCourse; // kurs ders adını saklayan karakter katarı
    GradeBook myGradeBook; // myGradeBook adlı nesneyi oluştur

    // kurs adı giriliyor...
    cout << "Lutfen kurs adi giriniz:" << endl;
    getline(cin, nameOfCourse); // içerisinde boşluklar bulunabilecek kurs adını oku

    // call myGradeBook'a ait displayMessage fonksiyonunu çağır
    // ve nameOfCourse u argüman olarak geçir
    myGradeBook.displayMessage(nameOfCourse);
}