// Slavnem @2024-07-18
// Vekil sınıf Interface tanımı
// işlemci bu kaynak kodu görür, fakat kaynak kod
// Implementation sınıfı verilerini göstermez

class Implementation; // gerekli ileri sınıf bildirimi

class Interface
{
    public:
        Interface(int); // yapıcı
        void setValue(int); // Implementation sınıfının sahip olduğu
        int getValue() const; // public arayüzün aynısı
        ~Interface(); // yıkıcı
    private:
        // önceki ileri sınıf bildirimine ihtiyaç duyar
        Implementation *ptr;
};