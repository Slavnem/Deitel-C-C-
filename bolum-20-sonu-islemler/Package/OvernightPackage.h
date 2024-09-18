// Slavnem @2024-09-19
// Overnight Package
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

// Kütüphaneler
#include "Package.h"

class OvernightPackage : public Package
{
    public:
        // Kurucu
        explicit OvernightPackage(
            // Sender
            const string &,
            const string &,
            const string &,
            const string &,
            const unsigned int &,

            // Receiver
            const string &,
            const string &,
            const string &,
            const string &,
            const unsigned int &,

            // Packet
            const float &
        );

        OvernightPackage(const Package &);
};

#endif // OVERNIGHTPACKAGE_H