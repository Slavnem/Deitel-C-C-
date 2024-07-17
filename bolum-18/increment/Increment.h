// Slavnem @2024-07-17
// Increment Sınıfı Prototipi

#ifndef INCREMENT_H
#define INCREMENT_H

// Increment Sınıfı
class Increment
{
    public:
        Increment(int c = 0, int i = 1); // varsayılan yapıcı

        // addIncrement fonksiyonu tanımı
        void addIncrement()
        {
            count += increment;
        }

        void print() const; // sayım ve arttırımı görüntüler
    private:
        int count; // sayaç veri üyesi
        const int increment; // const veri üyesi
};

#endif