// Slavnem @2024-07-18
// Sınıfta Tanımlı Friend Fonksiyon

// Kütüphaneler
#include <iostream>

using namespace std;

// Count sınıfı tanımı
class Count
{
    friend void setX(Count &, int); // friend bildirim

    public:
        // yapıcı
        Count()
            : x(0) // x'i 0 olarak ilklendir
        {
            // boş gövde
        }

        // x'i yazdır
        void print() const
        {
            cout << x << endl;
        }

    private:
        int x; // veri üyesi
};

// setX fonksiyonu Count sınıfının private üyesi
// değiştirilebilir çünkü setX Count sınıfının
// friend'i olarak bildirilir
void setX(Count &c, int val)
{
    // setX, Count sınıfının friend'i olduğu için izin verilir
    c.x = val;
}

// main
int main()
{
    Count counter; // Count nesnesi oluştur

    cout << "Baslatmadan sonra counter.x: ";
    counter.print();

    setX(counter, 8); // friend fonksiyon kullanarak x'i ayarla
    cout << "setX friend fonksiyon kullanildiktan sonra counter.x: ";
    counter.print();
}