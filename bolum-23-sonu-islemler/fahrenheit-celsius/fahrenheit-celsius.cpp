// Slavnem @2024-11-29 18:45 Debian 12
// Fahrenheit to Celsius

// Kütüphaneler
#include <iostream>
#include <iomanip>

using namespace std;

#define _FAHRENHEIT_MIN_ 0
#define _FAHRENHEIT_MAX_ 212

// Fahrenheit
class Fahrenheit
{
    private:
        int fahrenheit;

    public:
        // dönüştür
        friend const double fahrenheit_to_celsius(const Fahrenheit&);

        // kurucu
        Fahrenheit(const int);

        // çıktı
        void printCelsius() const;
};

// Dönüştür
const double fahrenheit_to_celsius(const Fahrenheit& _obj)
{
    // ondalığa çevir ve hesapla
    return 5.0 / 9.0 * (static_cast<double>(_obj.fahrenheit) - 32);
}

// Fahrenheit
Fahrenheit::Fahrenheit(const int _value)
{
    // geçersiz değer girilmişse
    if(_value < _FAHRENHEIT_MIN_)
    {
        fahrenheit = _FAHRENHEIT_MIN_;
        return;
    }

    // en yüksek değeri geçmeden
    fahrenheit = _value % _FAHRENHEIT_MAX_;
}

// Çıktı
void Fahrenheit::printCelsius() const
{
    cout << fixed << setprecision(3) <<
        fahrenheit << " Fahrenheit == " <<
        fahrenheit_to_celsius(fahrenheit) << " C"
        << endl;
}

// main
int main()
{
    Fahrenheit test(36);
    test.printCelsius();
}