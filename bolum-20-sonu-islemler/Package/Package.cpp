// Slavnem @2024-09-018
// Package (Paket) Sınıf Fonksiyonlar

// Kütüphaneler
#include <iostream>
#include <stdexcept>
#include "Package.h"

using namespace std;

// Ön Tanımlamalar
#define __PACK_COST_PER_KG__ 2.75

// Kurucu
Package::Package(
    // Sender
    const string &arg_senderName,
    const string &arg_senderLocation,
    const string &arg_senderCountry,
    const string &arg_senderCity,
    const unsigned int &arg_senderPostalCode,

    // Receiver
    const string &arg_receiverName,
    const string &arg_receiverLocation,
    const string &arg_receiverCountry,
    const string &arg_receiverCity,
    const unsigned int &arg_receiverPostalCode,

    // Packet
    const float &arg_packWeight
)
{
    // Sender
    setSenderName(arg_senderName);
    setSenderLocation(arg_senderLocation);
    setSenderCountry(arg_senderCountry);
    setSenderCity(arg_senderCity);
    setSenderPostalCode(arg_senderPostalCode);

    // Receiver
    setReceiverName(arg_receiverName);
    setReceiverLocation(arg_receiverLocation);
    setReceiverCountry(arg_receiverCountry);
    setReceiverCity(arg_receiverCity);
    setReceiverPostalCode(arg_receiverPostalCode);

    // Pack
    setPackWeight(arg_packWeight);
    setCost();
}

Package::Package(const Package &arg_copyPackage)
    : senderName(arg_copyPackage.getSenderName()),
    senderLocation(arg_copyPackage.getSenderLocation()),
    senderCountry(arg_copyPackage.getSenderCountry()),
    senderCity(arg_copyPackage.getSenderCity()),
    senderPostalCode(arg_copyPackage.getSenderPostalCode()),
    receiverName(arg_copyPackage.getReceiverName()),
    receiverLocation(arg_copyPackage.getReceiverLocation()),
    receiverCountry(arg_copyPackage.getReceiverCountry()),
    receiverCity(arg_copyPackage.getReceiverCity()),
    receiverPostalCode(arg_copyPackage.getReceiverPostalCode()),
    packWeight(arg_copyPackage.getPackWeight()),
    packCost(arg_copyPackage.calculateCost())
{
    // Boş
}

// Operatör
Package Package::operator=(const float &arg_weight)
{
    // ağrılığı ayarla ve yeni ağrılığı döndür
    setPackWeight(arg_weight);
    return *this; // kopyasını döndür
}

Package Package::operator+(const float &arg_weight)
{
    // ağrılığı ayarla ve yeni ağrılığı döndür
    setPackWeight(arg_weight);
    return *this; // kopyasını döndür
}

Package Package::operator-(const float &arg_weight)
{
    // ağrılığı ayarla ve yeni ağrılığı döndür
    setPackWeight(arg_weight);
    return *this; // kopyasını döndür
}

// senderName
void Package::setSenderName(const string &arg_senderName)
{
    // isim en az 3 harften oluşmak zorunda
    arg_senderName.length() < 3 ?
        throw invalid_argument("[ERR] senderName en az 3 harften oluşmalı")
        : senderName = arg_senderName;
}

string Package::getSenderName() const
{
    return senderName;
}

// senderLocation
void Package::setSenderLocation(const string &arg_senderLocation)
{
    // konum için en az 2 harf kabul ediyoruz
    // çünkü konum olarak sadece "US" gibi de yazılabilir
    arg_senderLocation.length() < 2 ?
        throw invalid_argument("[ERR] senderLocation en az 2 harften oluşmalı")
        : senderLocation = arg_senderLocation;
}

string Package::getSenderLocation() const
{
    return senderLocation;
}

// senderCountry
void Package::setSenderCountry(const string &arg_senderCountry)
{
    // ülke için kısaltma dahil en az 2 harf
    arg_senderCountry.length() < 2 ?
        throw invalid_argument("[ERR] senderCountry en az 2 harften oluşmalı")
        : senderCountry = arg_senderCountry;
}

string Package::getSenderCountry() const
{
    return senderCountry;
}

// senderCity
void Package::setSenderCity(const string &arg_senderCity)
{
    // şehir için kısaltma dahil en az 2 harf
    arg_senderCity.length() < 2 ?
        throw invalid_argument("[ERR] senderCity en az 2 harften oluşmalı")
        : senderCountry = arg_senderCity;
}

string Package::getSenderCity() const
{
    return senderCity;
}

// senderPostalCode
void Package::setSenderPostalCode(const unsigned int &arg_senderPostalCode)
{
    // normalde şehir koduna göre başında bir kod olması lazım
    // fakat şehiri kod olarak değil isim olarak aldığımız için
    // belirli bir sınır var
    // 1 -> şehir
    // 1 -> kod
    // ...
    arg_senderPostalCode < 11 ?
        throw invalid_argument("[ERR] senderPostalCode En Az 11 Olur, Şehir ve Yer İçin 1-1")
        : senderPostalCode = arg_senderPostalCode;
}

unsigned int Package::getSenderPostalCode() const
{
    return senderPostalCode;
}

// receiverName
void Package::setReceiverName(const string &arg_receiverName)
{
    // isim en az 3 harften oluşmak zorunda
    arg_receiverName.length() < 3 ?
        throw invalid_argument("[ERR] receiverName en az 3 harften oluşmalı")
        : receiverName = arg_receiverName;
}

string Package::getReceiverName() const
{
    return receiverName;
}

// receiverLocation
void Package::setReceiverLocation(const string &arg_receiverLocation)
{
    // konum için en az 2 harf kabul ediyoruz
    // çünkü konum olarak sadece "US" gibi de yazılabilir
    arg_receiverLocation.length() < 2 ?
        throw invalid_argument("[ERR] receiverLocation en az 2 harften oluşmalı")
        : receiverLocation = arg_receiverLocation;
}

string Package::getReceiverLocation() const
{
    return receiverLocation;
}

// senderCountry
void Package::setReceiverCountry(const string &arg_receiverCountry)
{
    // ülke için kısaltma dahil en az 2 harf
    arg_receiverCountry.length() < 2 ?
        throw invalid_argument("[ERR] receiverCountry en az 2 harften oluşmalı")
        : receiverCountry = arg_receiverCountry;
}

string Package::getReceiverCountry() const
{
    return receiverCountry;
}

// senderCity
void Package::setReceiverCity(const string &arg_receiverCity)
{
    // şehir için kısaltma dahil en az 2 harf
    arg_receiverCity.length() < 2 ?
        throw invalid_argument("[ERR] receiverCity en az 2 harften oluşmalı")
        : receiverCountry = arg_receiverCity;
}

string Package::getReceiverCity() const
{
    return receiverCity;
}

// senderPostalCode
void Package::setReceiverPostalCode(const unsigned int &arg_receiverPostalCode)
{
    // normalde şehir koduna göre başında bir kod olması lazım
    // fakat şehiri kod olarak değil isim olarak aldığımız için
    // belirli bir sınır var
    // 1 -> şehir
    // 1 -> kod
    // ...
    arg_receiverPostalCode < 11 ?
        throw invalid_argument("[ERR] receiverPostalCode En Az 11 Olur, Şehir ve Yer İçin 1-1")
        : receiverPostalCode = arg_receiverPostalCode;
}

unsigned int Package::getReceiverPostalCode() const
{
    return receiverPostalCode;
}

// packWeight
void Package::setPackWeight(const float &arg_packWeight)
{
    // ağırlık pozitif olmak zorunda
    arg_packWeight < 0.1 ?
        throw invalid_argument("[ERR] packWeigth Pozitif Olmak Zorunda")
        : packWeight = arg_packWeight;

    // yeni ağırlık verildiği için para da hesaplanmalı
    packCost = calculateCost();
}

float Package::getPackWeight() const
{
    return packWeight;
}

// packCost
void Package::setCost(const double &arg_autoCost)
{
    // otomatik düzgün ise onu kabul etsin
    if(arg_autoCost > 0.0)
    {
        packCost = arg_autoCost;
        return;
    }

    // ağırlığa göre hesap yapılacak
    if(getPackWeight() < 0.1)
        throw invalid_argument("[ERR] packCost Hesaplamak İçin packWeight 0.0'dan Fazla Olmak Zorunda");

    // belirli orana göre hesaplanıcaktır
    packCost = packWeight * __PACK_COST_PER_KG__;
}

double Package::calculateCost() const
{
    return packCost;
}

// Operatör >>
ostream &operator<<(ostream &output, const Package &arg_package)
{
    cout << "\nGönderen:"
        << "\nİsim: " << arg_package.getSenderName()
        << "\nKonum: " << arg_package.getSenderLocation()
        << "\nÜlke: " << arg_package.getSenderCountry()
        << "\nŞehir: " << arg_package.getSenderCity()
        << "\nPosta Kodu: " << arg_package.getSenderPostalCode()
        << "\n\nAlıcı:"
        << "\nİsim: " << arg_package.getReceiverName()
        << "\nKonum: " << arg_package.getReceiverLocation()
        << "\nÜlke: " << arg_package.getReceiverCountry()
        << "\nŞehir: " << arg_package.getReceiverCity()
        << "\nPosta Kodu: " << arg_package.getReceiverPostalCode()
        << "\n\nÜrün:"
        << "\nAğırlık: " << arg_package.getPackWeight() << " KG"
        << "\nÜcret: " << arg_package.calculateCost() << " TL"
        << endl;

    return output;
}