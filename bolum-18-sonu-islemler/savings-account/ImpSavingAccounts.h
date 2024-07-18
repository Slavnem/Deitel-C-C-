// Slavnem @2024-07-18
// Saving Accounts Implementasyonu
#ifndef IMPSAVINGACCOUNTS_H
#define IMPSAVINGACCOUNTS_H

// Kütüphaneler
#include <stdexcept>

using namespace std;

// Sınıf tanımı
class ImpSavingAccounts
{
    public:
        // yapıcı
        ImpSavingAccounts(int money)
            :   savingsBalance(money)
        {
            // boş gövde
        }

        int calculateMonthlyInterest();
        static void modifyInterestRate(int);

    private:
        int savingsBalance;
        static int annualInterestRate;
};

#endif