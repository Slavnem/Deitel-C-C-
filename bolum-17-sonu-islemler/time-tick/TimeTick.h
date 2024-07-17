// Slavnem @2024-07-16
// TimeTick Sınıfı Prototipi
#ifndef TIMETICK_H
#define TIMETICK_H

// TimeTick Sınıfı
class TimeTick
{
    public:
        // Kurucu
        TimeTick(int = 0, int = 0, int = 0); // sınıf başlatıcısı

        // Yıkıcı
        ~TimeTick(); // sınıf temizleyicisi

        // Set (Ayarlar)
        void setHour(int); // saati ayarla
        void setMinute(int); // dakika ayarla
        void setSecond(int); // saniye ayarla

        // Get (Getir)
        int getHour(); // saati getir
        int getMinute(); // dakikayı getir
        int getSecond(); // saniyeyi getir

        // Diğer
        void tick(); // saniyeyi arttır

        // Çıktı
        void printUniversal(); // küresel standarta göre çıktı
        void printStandard(); // normal standarta göre çıktı

    private:
        int hour; // saat
        int minute; // dakika
        int second; // saniye
};

#endif