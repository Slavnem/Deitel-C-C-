// Slavnem @2024-10-07
// Sorter Sınıfı Tanımı
#ifndef SORTER_H
#define SORTER_H

// Kütüphaneler
#include <iostream>

// Sınıf
template< typename T, std::size_t N >
class Sorter
{
    private:
        size_t size; // boyut
        T *dataPtr; // veri/veriler

    public:
        explicit Sorter(const T (&)[N]); // Kurucu

        // Yıkıcı
        ~Sorter()
        {
            delete [] dataPtr; // belleği temizle
        }

        void selectionSort() const; // Sıralayıcı
        void print() const; // Çıktı
};

// Kurucu
template< typename T, std::size_t N >
Sorter<T, N>::Sorter(const T(&array)[N])
    : size(N > 0 ? N : 0),
    dataPtr(new T[size])
{
    // verileri kopyala
    for(std::size_t i = 0; i < size; i++)
    {
        // veriye ait değeri kopyala
        dataPtr[i] = array[i];
    }
}

// Sıralayıcı
template< typename T, std::size_t N >
void Sorter<T, N>::selectionSort() const
{
    T tempValue; // geçici değeri tutacak olan değişken

    for(std::size_t i = 0; i < size - 1; i++)
    {
        for(std::size_t j = i + 1; j < size; j++)
        {
            // ara değer ana değerden büyükse devam etsin
            if(dataPtr[i] < dataPtr[j])
                continue;

            tempValue = dataPtr[i]; // ana değeri kopyala
            dataPtr[i] = dataPtr[j]; // ara değer artık ana değer
            dataPtr[j] = tempValue; // eski ana değer artık ara değer
        }
    }
}

// Çıktı
template< typename T, std::size_t N >
void Sorter<T, N>::print() const
{
    // dizi başından sonuna kadar çıktı versin
    std::cout << "\nPRINT:\n";

    for(std::size_t i = 0; i < size - 1; i++)
    {
        // değeri çıktı versin
        std::cout << dataPtr[i] << ' ';
    }
    
    // son değeri çıktı versin ve sonlansın
    std::cout << dataPtr[size - 1] << std::endl;
}

#endif // SORTER_H