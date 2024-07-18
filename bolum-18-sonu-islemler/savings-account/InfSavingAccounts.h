// Slavnem @2024-07-19
// Implementasyon Sınıfını Kullanarak Interface Sınıfı

#ifndef INFSAVINGACCOUNTS_H
#define INFSAVINGACCOUTNS_H

class ImpSavingAccounts;

class InfSavingAccounts
{
    public:
        InfSavingAccounts(int);
        ~InfSavingAccounts();
        int calculateMonthlyInterest();
        static void modifyInterestRate(int);

    private:
        ImpSavingAccounts *impPtr;
};

#endif