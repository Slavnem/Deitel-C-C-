// Slavnem @2024-06-28
// Referans Parametreleri İle Değer İle Aktarım
// Ve Referans İle Aktarım Karşılaştırması

// Kütüphanler
#include <iostream>

// Kullanımlar
using namespace std;

// Fonksiyon Prototipleri
int squareByValue(int); // değerle aktarım
void squareByReference(int &); // referansla aktarım

// main
int main()
{
    int x = 2; // squareByValue kullanılarak karesi alınacak değer
    int z = 4; // squareByReference kullanılarak karesi alınacak değer

    // squareByValue gösterimi
    cout << "x = " << x << ", squareByValue'den once\n";
    cout << "squareByValue tarafindan dondurulen deger: " << squareByValue(x) << endl;
    cout << "x = " << x << ", squareByValue'den sonra\n" << endl;

    // squareByReference gösterimi
    cout << "z = " << z << ", squareByReference'den once" << endl;
    squareByReference(z);
    cout << "z = " << z << ", squareByReference'den sonra" << endl;
}

// squareByValue number değerini kendisiyle çarpar,
// sonucu number içerisinde saklayarak yeni değerini geri döndürür
int squareByValue(int number)
{
    return number *= number; // çağırılan kısım argümanı değiştirilmedi
}

// squareByReference numberRef değerini kendisiyle çarpar,
// sonucu numberRef değişkenin referans olduğu çağırıcıdaki değişkende saklar
void squareByReference(int &numberRef)
{
    numberRef *= numberRef; // çağırıcının argümanı değiştirildi
}