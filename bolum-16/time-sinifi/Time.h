// Slavnem @2024-07-13
// Time Sınıfı Prototipi

// başlığın çok defa dahil edilmesini önler
#ifndef TIME_H
#define TIME_H

// Time sınıfı tanımı
class Time
{
    public:
        Time(); // kurucu
        void setTime(int, int, int); // saat, dakika ve saniyeyi getirir
        void printUniversal(); // evrensel-zaman biçiminde zamanın görüntülenmesi
        void printStandard(); // standart-zaman biçiminde zamanın görüntülenmesi

    private:
        int hour; // 0-23 (24 saat formatı)
        int minute; // 0-59
        int second; // 0-59
};

#endif