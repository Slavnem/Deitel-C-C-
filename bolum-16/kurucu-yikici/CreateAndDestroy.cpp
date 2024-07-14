// Slavnem @2024-07-14
// Kurucu ve Yıkıcı Sınıfı İşleyicileri

// Kütüphaneler
#include <iostream>
#include "CreateAndDestroy.h"

using namespace std;

// kurucu
CreateAndDestroy::CreateAndDestroy(int ID, string messageString)
{
    objectID = ID; // nesnenin kimlik numarasını getirir
    message = messageString; // nesnenin açıklayacı mesajını getirir

    cout << "Obje " << objectID << " kurucu calisiyor, " << message << endl;
}

// yıkıcı
CreateAndDestroy::~CreateAndDestroy()
{
    // yeni satır için kontrol
    cout << (objectID == 1 || objectID == 6 ? "\n" : "");

    cout << "Nesne " << objectID << " kurucu calisiyor, " << message << endl;
}