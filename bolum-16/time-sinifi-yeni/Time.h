// Slavnem @2024-07-14
// Time Sınıfı Prototipi

#ifndef TIME_H
#define TIME_H

// Time soyut veri türü tanımı
class Time
{
    public:
        Time(int = 0, int = 0, int = 0); // varsayılan kurucu

        // set fonksiyonları
        void setTime(int, int, int); // saat, dakika, saniye'yi getirir
        void setHour(int); // saati (doğrulamadan sonra) getirir
        void setMinute(int); // dakikayı (doğrulamadan sonra) getirir
        void setSecond(int); // saniyeyi (doğrulamadan sonra) getirir

        // get fonksiyonları
        int getHour(); // saati döndürür
        int getMinute(); // dakikayı döndürür
        int getSecond(); // saniyeyi döndürür

        void printUniversal(); // evrensel zaman biçiminde saat çıktısı
        void printStandard(); // standart zaman biçiminde saat çıktısı

    private:
        int hour; // 0-23 (24 saat formatı)
        int minute; // 0-59
        int second; // 0-59
};

#endif