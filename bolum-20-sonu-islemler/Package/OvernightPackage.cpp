// Slavnem @2024-09-19
// Overnight Package Sınıf Fonksiyonlar

// Kütüphaneler
#include "OvernightPackage.h"

// Ön Tanımlamalar
#define __PACK_WEIGTH_LIMIT__ 5
#define __PACK_COST_PER_KG__ 1.5

// Kurucu
OvernightPackage::OvernightPackage(
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
: Package(arg_senderName, arg_senderLocation, arg_senderCountry, arg_senderCity, arg_senderPostalCode,
    arg_receiverName, arg_receiverLocation, arg_receiverCountry, arg_receiverCity, arg_receiverPostalCode,
    arg_packWeight)
{
    // ücret
    const double temp_cost = calculateCost();

    // yeniden fiyatlandır
    setCost(temp_cost > __PACK_WEIGTH_LIMIT__ ?
        temp_cost + ((temp_cost / __PACK_WEIGTH_LIMIT__) * __PACK_COST_PER_KG__)
        : temp_cost);
}

OvernightPackage::OvernightPackage(const Package &arg_copyPackage)
: Package(arg_copyPackage)
{
    // ücret
    const double temp_cost = calculateCost();

    // yeniden fiyatlandır
    setCost(temp_cost > __PACK_WEIGTH_LIMIT__ ?
        temp_cost + ((temp_cost / __PACK_WEIGTH_LIMIT__) * __PACK_COST_PER_KG__)
        : temp_cost);
}