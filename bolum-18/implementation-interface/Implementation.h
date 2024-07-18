// Slavnem @2024-07-18
// Implementation sınıfı tanımı

class Implementation
{
    public:
        // constructor
        Implementation(int v)
            :   value(v) // value değişkenini v ile ilklendir
        {
            // boş gövde
        }

        // value değişimi v olarak ayarla
        void setValue(int v)
        {
            value = v; // v değerini doğrulamalı
        }

        // value değişimi döndür
        int getValue() const
        {
            return value;
        }
    private:
        int value; // istemciden gizlemek istediğimiz veri
};