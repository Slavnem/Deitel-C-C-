// Slavnem @2024-07-19
// Implementasyon Savings Accounts sınıfı işleyicileri

// Kütüphaneler
#include <stdexcept>
#include "ImpSavingAccounts.h"

using namespace std;

// başlangıç faiz değeri
int ImpSavingAccounts::annualInterestRate = 3;

// aylık faizi bakiyeye ekleme
int ImpSavingAccounts::calculateMonthlyInterest()
{
    return this->savingsBalance += (int)(savingsBalance * ((double)annualInterestRate / 12));
}

// aylık faiz oranını ayarlama
void ImpSavingAccounts::modifyInterestRate(int value)
{
    // geçerli bir değer girilmişse
    if(value > 0)
    {
        annualInterestRate = value;
        return;
    }

    // istisna hata fırlat
    throw invalid_argument("* Geçersiz Faiz Değeri *");
}