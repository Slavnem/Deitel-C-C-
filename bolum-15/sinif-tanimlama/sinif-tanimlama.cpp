// Slavnem @2024-07-11
// GradeBook Sınıfını Tanımlama

// Kütüphaneler
#include <iostream>
using namespace std;

// GradeBook sınıfı tanımı
class GradeBook
{
    public:
        // GradeBook kullanıcısına hoşgeldin mesajı görüntüleyen fonksiyon
        void displayMessage()
        {
            cout << "Grade Book'a Hosgeldiniz!" << endl;
        }
};

// main
int main()
{
    GradeBook myGradeBook; // myGradeBook adında GradeBook nesnesi oluşturur
    myGradeBook.displayMessage(); // nesnenin displayMessage fonksiyonunu çağır
}