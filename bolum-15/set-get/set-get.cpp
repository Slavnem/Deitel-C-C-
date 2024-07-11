// Slavnem @2024-07-11
// Sınıf İçinde Set ve Get Kullanımı

// Kütüphaneler
#include <iostream>
#include <string>

using namespace std;

// GradeBook sınıfı tanımı
class GradeBook
{
    public:
        // kurs adını atayan fonksiyon
        void setCourseName(string name)
        {
            courseName = name;
        }

        // kurs adını döndüren fonksiyon
        string getCourseName()
        {
            return courseName;
        }
        // hoşgeldin mesajı görüntüleyen fonksiyon
        void displayMessage()
        {
            // bu ifade GradeBook'a ait kurs adını almak için getCourseName'i çağırır
            cout << getCourseName() << " icin GradeBook'a Hosgeldiniz!" << endl;
        }
    
    private:
        string courseName; // GradeBook için kurs adı
};

// main
int main()
{
    string nameOfCourse; // kurs adını saklayan karakter kalıcı
    GradeBook myGradeBook; // myGradeBook adlı GradeBook nesnesini oluşturur

    // courseName in başlangıç değerini görüntüler
    cout << "Baslangicta kurs adi: " << myGradeBook.getCourseName() << endl;

    // kurs adı giriliyor
    cout << "\nLutfen kurs adi giriniz:" << endl;
    getline(cin, nameOfCourse); // içerisinde boşluk bulunabilecek kurs adını oku
    myGradeBook.setCourseName(nameOfCourse); // kurs adını değiştir

    cout << endl; // boş bir satır yazdır
    myGradeBook.displayMessage(); // yeni kurs adıyla mesajı görüntüle
}