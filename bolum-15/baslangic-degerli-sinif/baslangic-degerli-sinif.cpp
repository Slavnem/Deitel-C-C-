// Slavnem @2024-07-12
// Başlangıç Değeri İle Oluşturulan Sınıf

// Kütüphaneler
#include <iostream>
#include <string>

using namespace std;

// GradeBook sınıf tanımı
class GradeBook
{
    public:
        // yapısı courseName değişkenini argüman olarak gelen
        // karakter dizisi "string" ile ilklendirir
        GradeBook(string name)
        {
            // courseName değişkenini başlatmak üzere set fonksiyonunu çağır
            setCourseName(name);
        }

        // kurs adına değer atıyan fonksiyon
        void setCourseName(string name)
        {
            courseName = name; // kurs adını nesne içerisinde sakla
        }

        // kurs adını döndüren fonksiyon
        string getCourseName()
        {
            return courseName;
        }

        // GradeBook kullanıcısına hoşgeldin mesajı görüntüle
        void displayMessage()
        {
            cout << getCourseName() << "\nicin GradeBook'a hosgeldiniz!" << endl;
        }

    private:
        string courseName; // GradeBook sınıfının kurs adı
};

// main
int main()
{
    // iki adet GradeBook nesnesi oluştur
    GradeBook gradeBook1("CS101 C++'a Giris");
    GradeBook gradeBook2("CS102 C++'da Veri Yapilari");

    // herbir GradeBook nesnesi için courseName
    // başlangıç değerini görüntüle
    cout << "gradeBook1 kursu: " << gradeBook1.getCourseName()
        << "\ngradeBook2 kursu: " << gradeBook2.getCourseName()
        << endl;
}