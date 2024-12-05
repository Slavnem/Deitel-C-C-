// Slavnem @2024-12-05 23:17 Debian 12
// Integer

// Integer
class Integer
{
    private:
        int value;

    public:
        Integer(int i = 0); // varsayılan kurucu
        ~Integer(); // varsayılan yıkıcı

        void setInteger(int i); // atama
        int getInteger() const; // döndürme
};