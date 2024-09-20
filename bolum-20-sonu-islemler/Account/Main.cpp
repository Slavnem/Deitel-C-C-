// Slavnem @2024-09-20
// Main

// Kütüphaneler
#include <iostream>

#include "Account.h" // Hesap
#include "CheckingAccount.h" // Maaş Hesabı
#include "SavingsAccount.h" // Vadeli Hesap

using namespace std;

// main
int main()
{
    // test hesabı
    Account myacc(3.6);

    // maaş hesabı
    CheckingAccount checkacc(myacc.getBalance());

    // vadeli hesap
    SavingsAccount faizacc(myacc.getBalance());

    // maaş hesabı para çeksin ve yatırsın
    cout << "* Maaş Hesap *" << endl;

    checkacc.debit(2.1);
    checkacc.credit(18.9);

    // vadeli hesaptan para çeksin ve yatırsın
    cout << "\n* Vadeli Hesap *" << endl;

    faizacc.credit(45.6); // para yatır
    faizacc.calculateInterest(); // faiz hesapla
    cout << "Yatırılan Ücret: " << 45.6
        << " | Faiz Oranı: " << __SAVINGS_PERCENT__
        << " | Bakiye: " << faizacc.getBalance()
        << endl;

    faizacc.debit(12.4); // para çek
    cout << "Çekilen Ücret: " << 12.4
        << " | Faiz Oranı: " << __SAVINGS_PERCENT__
        << " | Bakiye: " << faizacc.getBalance()
        << endl;

    return 0;
}