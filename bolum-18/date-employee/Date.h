// Slavnem @2024-07-17
// Date Sınıfı Prototipi
#ifndef DATE_H
#define DATE_H

// Date Sınıfı
class Date
{
    public:
        static const int monthsPerYear = 12; // bir yıldaki ay sayısı
        Date(int = 1, int = 1, int = 1900); // varsayılan yapıcı
        void print() const; // tarihi ay/gün/yıl biçiminde yaz
        ~Date(); // yıkım işlemi için kullanılır

    private:
        int month; // 1-12 ay için (Ocak-Aralık)
        int day; // 1-31 gün için
        int year; // herhangi bir yıl için

        // gün bilgsininin ay ve yıl için uygunluğunu
        // kontrol eden yardımcı fonksiyon
        int checkDay(int) const;
};

#endif