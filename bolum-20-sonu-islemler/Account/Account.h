// Slavnem @2024-09-19
// Account (Hesap)
#ifndef ACCOUNT_H
#define ACCOUNT_H

// Sınıf
class Account
{
    private:
        double money; // kullanıcıya ait para

    public:
        // Kurucu
        Account(const double &arg_money);

        // Para Yatır
        void credit(const double &arg_money);

        // Parayı Göster
        double getBalance() const;

        // Para Çek
        void debit(const double &arg_money);
};

#endif // ACCOUNT_H