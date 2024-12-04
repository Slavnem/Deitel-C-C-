// Slavnem @2024-11-04 23:43 Debian 12
// Divide By Zero Exception

// Kütüphaneler
#include <stdexcept> // stdexcept başlığı runtime_error sınıfını içerir
using namespace std;

// Fonksiyonlar tarafından DivideByZeroException nesneleri sıfıra-bölme
// istisnasının algılanmasına takiben fırlatılır
class DivideByZeroException : public runtime_error
{
    public:
        // kurucu varsayılan hata mesajını belirler
        DivideByZeroException()
            : runtime_error("0'a bolme hatasi") {}
};