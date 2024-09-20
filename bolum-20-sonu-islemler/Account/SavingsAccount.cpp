// Slavnem @2024-09-20
// Savings Account Sınıfı Fonksiyonlar

// Kütüphaneler
#include <iostream>
#include <stdexcept>
#include "SavingsAccount.h"

// Kurucu
SavingsAccount::SavingsAccount(const double &arg_money)
    : Account(arg_money)
{
    // Boş
}

// Faiz Hesapla
double SavingsAccount::calculateInterest()
{
    // kullanıcıya ait para
    const double balance = Account::getBalance();

    // faiz oranlı hali
    const double savingsBalance = balance + (balance * __SAVINGS_PERCENT__);

    // yeni miktar
    Account::credit(savingsBalance);

    // yeni miktarı döndür
    return savingsBalance;
}