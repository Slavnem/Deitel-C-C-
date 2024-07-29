// Slavnem @2024-07-29
// Array sınıfı üyeleri ve friend fonksiyon tanımlamaları
#include <iostream>
#include <iomanip>
#include <cstdlib> // exit fonksiyon prototipi
#include "Array.h" // Array sınıfı tanımı

using namespace std;

// Array sınıfı için varsayılan kurucu (varsayılan boyut 10)
Array::Array(int arraySize)
{
    // arraySize'ı doğrula
    if(arraySize > 0)
        size = arraySize;
    else
        throw invalid_argument("Array boyutu 0'dan büyük olmak zorunda");

    ptr = new int[size]; // işaretçi tabanlı dizi için alan oluştur

    for(int i = 0; i < size; ++i)
        ptr[i] = 0; // işaretçi tabanlı dizi elemanı kurma
}

// Array sınıfı sonsuz döngüden kaçınmak için bir referans almalı
Array::Array(const Array &arrayToCopy)
    : size(arrayToCopy.size)
{
    ptr = new int[size]; // işaretçi tabanlı dizi için alan oluştur

    for(int i = 0; i < size; ++i)
        ptr[i] = arrayToCopy.ptr[i]; // nesne içine kopyala
}

// Array sınıfı için yıkıcı fonksiyon
Array::~Array()
{
    delete [] ptr; // işaretçi tabanlı dizinin belleğini bırak
}

// Array'ın eleman sayısını döndür
int Array::getSize() const
{
    return size; // Array içindeki elemen sayısı
}

// aşırı yüklenmiş atama operatörü
// const ile (a1 = a2) = a3 durumundan kaçınılır
const Array &Array::operator = (const Array &right)
{
    if(&right != this) // öz atamadan kaçınma için
    {
        // farklı boyutlardaki Array için soldaki diziyi bırak
        // daha sonra yeni sol taraftaki diziyi oluştur
        if(size != right.size)
        {
            delete [] ptr; // belleği bırak
            size = right.size; // bu nesneyi tekrar boyutlandır
            ptr = new int[size]; // dizi kopyası alan oluştur
        }

        for(int i = 0; i < size; ++i)
            ptr[i] = right.ptr[i]; // diziyi nesne içine kopyala
    }

    return *this; // x = y = z'i mümkün kılar
}

// eğer iki Array birbirine eşitse TRUE döndür
// değilse FALSE döndür
bool Array::operator == (const Array &right) const
{
    if(size != right.size)
        return false; // farklı sayıda elemanlı diziler

    for(int i = 0; i < size; ++i)
        if(ptr[i] != right.ptr[i])
            return false; // Array içerikleri eşit değil

        return true; // Array'ler eşit
}

// const olamayan Array'ler için aşırı yüklenmiş indis
// operatörü referans değiştirilebilir sol değer oluşturur
int &Array::operator[](int subscript)
{
    // out-of-range hatasına karşın indisi kontrol et
    if(subscript < 0 || subscript >= size)
        throw out_of_range("İndis aralık dışında!");

    return ptr[subscript]; // referans döndür
}

// Array sınıf için aşırı yüklenmiş giriş operatörü
// Tüm Array için giriş değerleri
istream &operator>>(istream &input, Array &a)
{
    for(int i = 0; i < a.size; ++i)
        input >> a.ptr[i];

    return input; // cin >> x >> y, mümkün kılar
}

// Array sınıf için aşırı yüklenmiş çıktı operatörü
ostream &operator << (ostream &output, const Array &a)
{
    int i;

    // özel işaretçi tabanlı dizi çıktısı
    for(i = 0; i < a.size; ++i)
    {
        output << setw(12) << a.ptr[i];

        if((i+1) % 4 == 0) // her satırda dört rakam
            output << endl;
    }

    if(i % 4 != 0) // son satır çıktısı
        output << endl;

    return output; // cout << x << y, yazmayı mümkün kılar
}