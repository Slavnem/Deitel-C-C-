// Slavnem @2024-10-06
// Stack Sınıfı Tanımı
#ifndef STACK_H
#define STACK_H

template< typename T >
class Stack
{
    private:
        int size; // yığındaki eleman sayısı
        int top; // üst eleman konumu (-1 ise boş olduğunu gösterir)
        T *stackPtr; // stack sınıfının dahili temsili için işaretçi

    public:
        explicit Stack(int = 10); // varsayılan kurucu (yığın boyutu 10)

        // yıkıcı
        ~Stack()
        {
            delete [] stackPtr; // yığın için alan aç
        }

        bool push(const T &); // yığına bir eleman ekle
        bool pop(T &); // yığından bir eleman çıkar

        // yığının boş olup olmadığını belirle
        bool isEmpty() const
        {
            return top == -1;
        }

        // yığının dolu olup olmadığını belirle
        bool isFull() const
        {
            return top == size - 1;
        }
};

// kurucu şablonu
template< typename T >
Stack< T >::Stack(int s)
    : size(s > 0 ? s : 10), // boyutu doğrula
    top(-1), // yığın başlangıçta boştur
    stackPtr(new T[ size ]) // yığın elemanları için bellek ayır
{
    // boş gövde
}

// yığına eleman ekle
// ekleme başarılı ise, true döndür; aksi halde false döndür
template< typename T >
bool Stack< T >::push(const T &pushValue)
{
    if(!isFull())
    {
        stackPtr[ ++top ] = pushValue; // yığına bir eleman ekle
        return true; // ekleme başarılı
    }

    return false; // ekleme baiarısız
}

// yığından eleman çıkar
// çıkarma başaşarılı ise, true döndür; aksi halde false döndür
template< typename T >
bool Stack< T >::pop(T &popValue)
{
    if(!isEmpty())
    {
        popValue = stackPtr[ top-- ]; // yığından bir eleman çıkar
        return true; // çıkarma başarılı
    }

    return false; // çıkarma başarısız
}

#endif // STACK_H