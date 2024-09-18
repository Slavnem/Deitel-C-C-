// Slavnem @2024-09-19
// Two Day Package
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

// Kütüphaneler
#include "Package.h"

class TwoDayPackage : public Package
{
    public:
        // Kurucu
        explicit TwoDayPackage(
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

        TwoDayPackage(const Package &);
};

#endif // TWODAYPACKAGE_H