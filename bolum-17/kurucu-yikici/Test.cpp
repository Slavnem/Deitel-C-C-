// Slavnem @2024-07-14
// Test

// Kütüphaneler
#include <iostream>
#include "CreateAndDestroy.h"

using namespace std;

// fonksiyon prototipi
void create(void);

CreateAndDestroy first(1, "(main'den once genel nesne)");

// main
int main()
{
    cout << "\nCREATE FONKSİYONU: UYGULAMA BAŞLIYOR" << endl;

    CreateAndDestroy second(2, "(main içinde yerel otomatik)");
    static CreateAndDestroy third(3, "(main içinde yerel sabit)");

    // nesneleri oluşturmak için fonksiyon çağırılır
    create();

    cout << "\nMAIN FONKSİYONU: UYGULAMA GEÇMİŞİ" << endl;
    CreateAndDestroy fourth(4, "(main içinde yerel otomatik)");
    cout << "\nMAIN FONKSİYONU: UYGULAMA BİTİŞİ" << endl;
}

// nesneleri oluşturma için işlev
void create(void)
{
    cout << "\nCREATE FONKSİYONU: UYGULAMA BAŞLIYOR" << endl;
    CreateAndDestroy fifth(5, "create içinde yerel otomatik");
    static CreateAndDestroy sixth(6, "create içinde yerel sabit");
    CreateAndDestroy seventh(7, "(main içinde yerel otomatik oluşturma)");
    cout << "\nCREATE FONKSİYONU: UYGULAMA BİTİŞİ" << endl;
}