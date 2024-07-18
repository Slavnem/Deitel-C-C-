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

        // aylık faiz hesaplama
        int calculateMonthlyInterest()
        {
            return this->savingsBalance += (int)(savingsBalance * ((double)annualInterestRate / 12));
        }

        // aylık faiz değeri ayarlama
        static int modifyInterestRate(int);

    private:
        int savingsBalance;
        static int annualInterestRate;
};

// başlangıç faiz değeri
int ImpSavingAccounts::annualInterestRate = 3;

int ImpSavingAccounts::modifyInterestRate(int value)
{
    if(value > 0)
        return annualInterestRate = value;

    throw invalid_argument("* Geçersiz Faiz Değeri *");
}

#endif