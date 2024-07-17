// Slavnem @2024-07-13
// İşaretçi (*) ve Referans (&) Kullanımı

// Kütüphaneler
#include <iostream>
using namespace std;

// Count sınıfı tanımı
class Count
{
    public: // public veriler riskli
        // Özel veri üyesi x değerini ayarlama
        void setX(int value)
        {
            x = value;
        }

        // Özel veri üyesi x değerini yazdırma
        void print()
        {
            cout << x << endl;
        }

    private:
        int x;
};

// main
int main()
{
    Count counter; // sayaç nesnesi oluşturma
    Count *counterPtr = &counter; // sayaç için işaretçi oluşturmak
    Count &counterRef = counter; // sayaç için referans oluşturma

    cout << "Nesnenin adını kullanarak x'e 1 atama: ";
    counter.setX(1); // veri üyesi x'e 1 atama
    counter.print(); // üye fonksiyon print'i çağırma

    cout << "Nesnenin referansını kullanarak x'e 2 atama: ";
    counterRef.setX(2); // veri üyesi x'e 2 atama
    counterRef.print(); // üye fonksiyon print'i çağırma

    cout << "Nesnenin işaretini kullanarak x'e 3 atama: ";
    counterPtr->setX(3); // veri üyesi x'e 3 atama
    counterPtr->print(); // üye fonksiyon print'i çağırma
}