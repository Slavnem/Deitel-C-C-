// Slavnem @2024-09-19
// Checking Account (Maaş Hesabı)
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

// Kütüphaneler
#include "Account.h"

// Ön Tanımlamalar
#define __TRANSFER_PERCENT__ 0.01 // 100 de 1'i kadar (%1)

// Sınıf
class CheckingAccount : public Account
{
    private:
        double transferBalance; // transfer ücreti

    public:
        // Kurucu
        CheckingAccount(const double &arg_money);

        // Para Yatır
        void credit(const double &arg_money);

        // Para Çek
        void debit(const double &arg_money);
};

#endif // CHECKINGACCOUNT_H