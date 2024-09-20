// Slavnem @2024-09-20
// Savings Account (Vadeli Hesap)
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

// Ön Tanımlamalar
#define __SAVINGS_PERCENT__ 0.03 // 100 de 3'ü kadar faiz oranı (%3)

// Kütüphaneler
#include "Account.h"

// Sınıf
class SavingsAccount : public Account
{
    private:
        double savingsBalance; // faiz ücreti

    public:
        // Kurucu
        SavingsAccount(const double &);

        // Faiz hesapla
        double calculateInterest();
};

#endif // SAVINGACCOUNT_H