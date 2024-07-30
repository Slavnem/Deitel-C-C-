// Slavnem @2024-07-31
// DoubleSubscriptedArray sınıfı işlemleri

// Kütüphaneler
#include <iostream>
#include "DoubleSubscriptedArray.h" // sınıf dosyası

using namespace std;

// Kurucu, satır ve sütun belirleme
DoubleSubscriptedArray::DoubleSubscriptedArray(int rw, int cl)
{
    // boyutları doğrulamak (satır ve sütun)
    if(rw < 1) throw invalid_argument("Geçersiz Satır Değeri Girdiniz");
    if(cl < 1) throw invalid_argument("Geçersiz Sütun Değeri Girdiniz");

    // satır ve sütunu ayarlamak
    row = rw;
    col = cl;

    // boyutunu ayarlamak
    size = row * col;

    // dizi için bellek alanı ayır
    ptr = new int[size];

    // değerleri sıfırla
    for(int i = 0; i < size; i++)
        ptr[i] = 0;
}

// Kopyalı sınıf objesini kullanarak yenisini oluştur
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &copyObj)
    : row(copyObj.row), col(copyObj.col), size(copyObj.size)
{
    // yeni bellek alanı ayır
    ptr = new int[size];

    // değerleri atamak
    for(int i = 0; i < size; i++)
        ptr[i] = copyObj.ptr[i];
}

// Yıkıcı
DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    // bellek alanını serbest bırak
    delete [] ptr;
}

// satır ve sütun verilerini almak
int &DoubleSubscriptedArray::operator()(const int rw, const int cl)
{
    // kontrol sağlasın
    if(rw < 1 || rw > row) throw invalid_argument("Erişmek İstediğiniz Satır Değeri Geçersiz");
    if(cl < 1 || cl > col) throw invalid_argument("Erişmek İstediğiniz Sütun Değeri Geçersiz");

    // erişitiği adresi döndürsün
    return ptr[((rw - 1) * col) + (cl - 1)];
}

// satır ve sütun verilerini almak
int &DoubleSubscriptedArray::operator()(const int rw, const int cl) const
{
    // kontrol sağlasın
    if(rw < 1 || rw > row) throw invalid_argument("Erişmek İstediğiniz Satır Değeri Geçersiz");
    if(cl < 1 || cl > col) throw invalid_argument("Erişmek İstediğiniz Sütun Değeri Geçersiz");

    // erişitiği adresi döndürsün
    return ptr[((rw - 1) * col) + (cl - 1)];
}

// Eşitlik kontrolü
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &compareObj) const
{
    // boyut kontrolleri
    if(row != compareObj.row || col != compareObj.col || size != compareObj.size)
        return false;

    // dizi içerisindeki değerleri kontrol etsin
    for(int i = 0; i < size; i++)
        if(ptr[i] != compareObj.ptr[i]) // değer aynı değildir
            return false;

    // değerler aynıdır
    return true;
}

// Eşitsizlik kontrolü
bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &compareObj) const
{
    return !(*this == compareObj); // karşılaştır
}

// Atama yapmak
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray& copyObj)
{
    // öz atamadan kaçınmak
    if(this == &copyObj) return *this;

    // farklı boyutlarda ise belleği serbest bırak
    // yeniden bellek alanı ayır
    if(size != copyObj.size)
    {
        delete [] ptr; // belleği temizle

        row = copyObj.row; // satır
        col = copyObj.col; // sütun
        size = copyObj.size; // toplam boyutu ayarla

        ptr = new int[size]; // yeni bellek alanı ayır
    }

    // değerleri kopyala
    for(int i = 0; i < size; i++)
        ptr[i] = copyObj.ptr[i];

    return *this;
}

// Değerleri oku
istream &operator>>(istream &input, DoubleSubscriptedArray &d)
{
    for (int i = 0; i < d.size; i++)
    {
        cout << "[" << ((i / d.col) + 1) << ":" << ((i % d.col) + 1) << "] => ";
        input >> d.ptr[i]; // değeri al
    }

    // referansı döndür
    return input;
}

// Değerleri çıktı ver
ostream &operator<<(ostream &output, const DoubleSubscriptedArray &d)
{
    for(int i = 0; i < d.size; i++)
        output << "[" << ((i / d.col) + 1) << ":" << ((i % d.col) + 1) << "] => " << d.ptr[i] << endl;

    // referansı döndür
    return output;
}