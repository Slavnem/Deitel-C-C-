// Slavnem @2024-07-12
// Banka Hesabı Sınıfı Prototipi

// Bank Account sınıfı tanımı
class BankAccount
{
    public:
        BankAccount(int);
        void paraYatir(int);
        void paraCek(int);
        int getBakiye();
    private:
        int bakiye;
};