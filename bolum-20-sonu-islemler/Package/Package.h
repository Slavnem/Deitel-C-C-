// Slavnem @2024-09-18
// Package (Paket) Sınıfı
#ifndef PACKAGE_H
#define PACKAGE_H

// Kütüphaneler
#include <iostream>
#include <string>

using namespace std;

// Sınıf
class Package
{
    friend ostream &operator<<(ostream &, const Package &); // veri çıktısı

    private:
        // Paketi Gönderen
        string senderName; // isim
        string senderLocation; // adres
        string senderCountry; // ülke
        string senderCity; // şehir
        unsigned int senderPostalCode = 0;

        // Paketi Alan
        string receiverName; // isim
        string receiverLocation; // adres
        string receiverCountry; // ülke
        string receiverCity; // şehir
        unsigned int receiverPostalCode = 0;

        // Paket Bilgisi
        float packWeight; // paket ağırlığı
        double packCost; // paket için para

    public:
        // Kurucu
        explicit Package(
            // Sender
            const string & = "Sender",
            const string & = "Türkiye/İstanbul",
            const string & = "Türkiye",
            const string & = "İstanbul",
            const unsigned int & = 34758,

            // Receiver
            const string & = "Receiver",
            const string & = "Türkiye/İstanbul",
            const string & = "Türkiye",
            const string & = "İstanbul",
            const unsigned int & = 34758,

            // Packet
            const float & = 1.0f
        );

        Package(const Package &);

        // Operatör
        Package operator=(const float &); // ağrılık değiştir
        Package operator+(const float &); // ağırlık ekleme
        Package operator-(const float &); // ağırlık çıkarma

        // Set & Get
        void setSenderName(const string &);
        string getSenderName() const;

        void setSenderLocation(const string &);
        string getSenderLocation() const;

        void setSenderCountry(const string &);
        string getSenderCountry() const;

        void setSenderCity(const string &);
        string getSenderCity() const;

        void setSenderPostalCode(const unsigned int &);
        unsigned int getSenderPostalCode() const;

        void setReceiverName(const string &);
        string getReceiverName() const;

        void setReceiverLocation(const string &);
        string getReceiverLocation() const;

        void setReceiverCountry(const string &);
        string getReceiverCountry() const;

        void setReceiverCity(const string &);
        string getReceiverCity() const;

        void setReceiverPostalCode(const unsigned int &);
        unsigned int getReceiverPostalCode() const;

        void setPackWeight(const float &);
        float getPackWeight() const;

        void setCost(const double & = 0.0);
        double calculateCost() const;
};

#endif // PACKAGE_H