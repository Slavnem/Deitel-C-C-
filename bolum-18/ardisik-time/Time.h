// Slavnem @2024-07-18
// "this" İle Ardışık Time Sınıfı

#ifndef TIME_H
#define TIME_H

class Time
{
    public:
        Time(int = 0, int = 0, int = 0); // varsayılan yapıcı

        // set fonksiyonları (Time& geri dönüş tipleri
        // ardışık fonksiyon çağrılarına imkan verir)
        Time &setTime(int, int, int); // saat, dakika, saniye ayarla
        Time &setHour(int); // saati ayarla
        Time &setMinute(int); // dakikayı ayarla
        Time &setSecond(int); // saniyeyi ayarla

        // get fonksiyonları (const olarak bildirilmiştir)
        int getHour() const; // saati döndür
        int getMinute() const; // dakikayı döndür
        int getSecond() const; // saniyeyi döndür

        // yazdır fonksiyonları (const olarak bildirilmiştir)
        void printUniversal() const; // evrensel zamanı yazdır
        void printStandard() const; // standart zamanı yazdır

    private:
        int hour; // 0-23 (24 saat biçimi)
        int minute; // 0-59
        int second; // 0-59
};

#endif