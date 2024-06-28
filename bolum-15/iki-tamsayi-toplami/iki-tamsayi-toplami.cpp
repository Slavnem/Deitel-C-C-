// Slavnem @2024-06-28
// İki Tamsayıyı Toplama

// Kütüphaneler
#include <iostream>

// main
int main()
{
    int number1; // toplanacak ilk sayı

    std::cout << "Ilk tamsayiyi giriniz: "; // kullanıcıdan veri istemi
    std::cin >> number1; // kullanıcıdan ilk tamsayıyı number1 değişkeni içerisine oku

    int number2; // toplanacak ikinci tamsayı
    int sum; // number1 ve number2 nin toplamı

    std::cout << "Ikinci tamsayiyi giriniz: "; // kullanıcıdan veri istemi
    std::cin >> number2; // kullanıcıdan ikinci tamsayıyı number2 değişkeni içerisine oku
    sum = number1 + number2; // sayıları topla; sonucu sum içerisinde tut
    std::cout << "Toplam: " << sum << std::endl; // sum değerini görüntüle; satır sonu
}