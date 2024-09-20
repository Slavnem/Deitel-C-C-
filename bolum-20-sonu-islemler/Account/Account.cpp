// Slavnem @2024-09-19
// Account Sınıfı Fonksiyonlar

// Kütüphaneler
#include <stdexcept>
#include "Account.h"

// Kurucu
Account::Account(const double &arg_money)
    : money(0.0) // para başlangıçta sıfırlanır
{
    // parayı yatır
    credit(arg_money);
}

// Para Yatır
void Account::credit(const double &arg_money)
{
    // para değerini kontrol et
    arg_money < 0.0 ?
        throw std::invalid_argument("[ERR] Para En Az 0 Olabilir")
        : money = arg_money;
}

// Para Çek
void Account::debit(const double &arg_money)
{
    // istene para ile orjinal parayı kıyasla
    // büyük ise hata, değilse parayı çek
    arg_money > money ?
        throw std::invalid_argument("[ERR] Çekilmek İstenen Para Ana Bakiyeden Büyük Olamaz")
        : money -= arg_money;
}

// Parayı Getir
double Account::getBalance() const
{
    return money; // ana parayı döndür
}