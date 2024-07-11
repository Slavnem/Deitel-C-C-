// Slavnem @2024-07-12
// GradeBook sınıf tanımı

// Kütüphaneler
#include <iostream>
#include <string>

using namespace std;

// GradeBook sınıf tanımı
class GradeBook
{
    public:
        // courseName değişkenini argüman olarak gelen
        // karakter diziniyle başlatır
        GradeBook(string name)
        {
            // courseName değişkenini başlatmak üzere
            // set fonksiyonunu çağır
            setCourseName(name);
        }

        // kurs adına değer atayan fonksiyon
        void setCourseName(string name)
        {
            courseName = name;
        }

        // kurs adını döndüren fonksiyon
        string getCourseName()
        {
            return courseName;
        }

        // GradeBook kullanıcısına hoşgeldin mesajı
        void displayMessage()
        {
            cout << getCourseName() << "\nicin GradeBook'a hosgeldiniz!" << endl;
        }

    private:
        string courseName;
};