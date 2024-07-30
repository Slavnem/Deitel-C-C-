// Slavnem @2024-07-31
// Test

// Kütüphaneler
#include "DoubleSubscriptedArray.h"

// main
int main()
{
    // 3 satır 5 sütun boyutunda nesne oluştursun
    DoubleSubscriptedArray chessBoards(3, 5);

    // değerleri okusun
    cout << "3 satır ve 5 sütun veri giriniz:" << endl;

    // veriyi okusun
    cin >> chessBoards;

    // kopyasını oluştursun
    DoubleSubscriptedArray chessBoards2(chessBoards);

    // veriyi çıktı versin
    cout << "\nchessBoards1:\n" << chessBoards
        << "\nchessBoards2:\n" << chessBoards2;

    // karşılaştırma yapsın
    if(chessBoards == chessBoards2)
        cout << "chessBoards, chessBoards2'ye eşittir" << endl;
    else
        cout << "chessBoards, chessBoards2'ye eşit değildir" << endl;

    // karşılaştırma yapsın
    if(chessBoards != chessBoards2)
        cout << "chessBoards, chessBoards2'ye eşit değildir kontrolü başarılı" << endl;
    else
        cout << "chessBoards, chessBoards2'ye eşit değildir kontrolü başarısız" << endl;

    // değer erişimi
    cout << "chessBoards(1,3) => " << chessBoards(1,3)
        << "\nchessBoards2(1,3) => " << chessBoards2(1,3)
        << endl;
}