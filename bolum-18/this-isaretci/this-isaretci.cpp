// Slavnem @2024-07-18
// "this" İşaretçi

// Kütüphaneler
#include <iostream>

using namespace std;

class Test
{
    public:
        Test(int = 0); // varsayılan yapıcı
        void print() const;
    private:
        int x;    
};

// kurucu
Test::Test(int value)
    :   x(value) // x'i value değeriyle ilklendir
{
    // boş gövde
}

// x'i kapalı ve açık this işaretçileriyle yazdır
// *this çevresindeki parantezler gereklidir
void Test::print() const
{
    // this işaretçisinin x üyesine erişmek
    // için kapalı olarak kullan
    cout << " x = " << x;

    // this işaretçisini ve ok işlecini
    // x üyesine erişmek için açık olarak kullan
    cout << "\n this->x = " << this->x;

    // dereferenced this işaretçisini ve nokta
    // x üyesine erişmek için açık olarak kullan
    cout << "\n(*this).x = " << (*this).x << endl;
}

// main
int main()
{
    // test nesnesini örneklendir ve ilklendir
    Test testObject(12);

    testObject.print();
}