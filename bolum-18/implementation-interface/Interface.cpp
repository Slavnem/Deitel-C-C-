// Slavnem @2024-07-18
// Interface sınıfı gerçekleşmesi, işlemci sadece bu dosyayı
// önceden derlenmiş nesne kodu olarak (gerçeklemeyi gözlemek için) alır

// Kütüphaneler
#include "Interface.h"
#include "Implementation.h"

// yapıcı
Interface::Interface(int v)
    // ptr'yi yeni Implementation
    // nesnesini göstermesi için ilklendir
    : ptr (new Implementation(v))
{
    // boş gövde
}

// Implementation'ın setValue fonksiyonunu çağır
void Interface::setValue(int v)
{
    ptr->setValue(v);
}

// Implementation'ın getValue fonksiyonunu çağır
int Interface::getValue() const
{
    return ptr->getValue();
}

// yıkıcı
Interface::~Interface()
{
    delete ptr;
}