// Slavnem @2024-09-19
// CheckingAccount Sınıfı Fonksiyonlar

// Kütüphaneler
#include <iostream>
#include <stdexcept>
#include "CheckingAccount.h"

// Kurucu
CheckingAccount::CheckingAccount(const double &arg_money)
    : Account(arg_money)
{
    // Boş
}

// Para Yatırma
void CheckingAccount::credit(const double &arg_money)
{
    // yatırılmak istenen miktar ve ana para kontrolü
    if(arg_money < 0.1)
        throw std::invalid_argument("[ERR] Yatırılmak İstenen Para Miktarı Geçersiz");
        
    // %1 kessin
    transferBalance = (arg_money * __TRANSFER_PERCENT__);

    // yatırılacak para
    const double creditBalance = arg_money - transferBalance;

    // para yatırılırken transfer ücreti düşerek yatırılsın
    Account::credit(creditBalance);

    // test çıktısı
    std::cout << "Transfter Ücreti: " << transferBalance
        << " | Yatan Ücret: " << creditBalance
        << " | Bakiye: " << Account::getBalance()
        << std::endl;
}

// Para Çekme
void CheckingAccount::debit(const double &arg_money)
{
    // çekilmek istenen miktar ve ana para kontrolü
    if(arg_money < 0.1)
        throw std::invalid_argument("[ERR] Çekilmek İstenen Para Miktarı Geçersiz");

    // %1 kessin
    transferBalance = (arg_money * __TRANSFER_PERCENT__);

    // çekileccek para
    const double debitBalance = arg_money - transferBalance;

    // para çekilirken transfer ücreti düşerek çekilsin
    Account::debit(debitBalance);

    // test çıktısı
    std::cout << "Transfter Ücreti: " << transferBalance
        << " | Çekilen Ücret: " << debitBalance
        << " | Bakiye: " << Account::getBalance()
        << std::endl;
}