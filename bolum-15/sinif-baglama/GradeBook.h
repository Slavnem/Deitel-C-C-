// Slavnem @2024-07-12
// GradeBook Sınıf Tanımı Başlığı

// Kütüphaneler
#include <iostream>

using namespace std;

// GradeBook sınıf tanımı
class GradeBook
{
    public:
        GradeBook(string); // GradeBook nesnesini ilklendiren yapıcı
        void setCourseName(string); // kurs adını atayan fonksiyon
        string getCourseName(); // kurs adını döndüren fonksiyon
        void displayMessage(); // hoşgeldin mesajı görüntüleyen fonksiyon
    private:
        string courseName; // GradeBook sınıfı kurs adı
};