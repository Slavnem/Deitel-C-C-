// Slavnem @2024-07-19
// Interface sınıfı işleyicilerini oluşturmak

// Kütüphaneler
#include "ImpSavingAccounts.h"
#include "InfSavingAccounts.h"

// yapıcı
InfSavingAccounts::InfSavingAccounts(int money)
    : impPtr(new ImpSavingAccounts(money))
{
    // boş gövde
}

// yıkıcı
InfSavingAccounts::~InfSavingAccounts()
{
    delete impPtr;
}

// faiz hesaplayıcı
int InfSavingAccounts::calculateMonthlyInterest()
{
    return impPtr->calculateMonthlyInterest();
}

// faiz oranı ayarlama
void InfSavingAccounts::modifyInterestRate(int value)
{
    ImpSavingAccounts::modifyInterestRate(value);
}