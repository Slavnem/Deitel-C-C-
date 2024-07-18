// Slavnem @2024-07-19
// Test

// Kütüphaneler
#include <iostream>
#include <iomanip>
#include "InfSavingAccounts.h"

using namespace std;

// main
int main()
{
    InfSavingAccounts saver1(2000);
    InfSavingAccounts saver2(3000);

    cout << "saver1 yeni bakiye: " << saver1.calculateMonthlyInterest() << endl;
    cout << "saver2 yeni bakiye: " << saver2.calculateMonthlyInterest() << endl;

    // yeni faiz miktarı
    InfSavingAccounts::modifyInterestRate(4);

    cout << "saver1 yeni bakiye: " << saver1.calculateMonthlyInterest() << endl;
    cout << "saver2 yeni bakiye: " << saver2.calculateMonthlyInterest() << endl;
}