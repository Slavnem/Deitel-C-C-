// Slavnem @2024-07-29
// Array sınıfı uygulama programı
#include <iostream>
#include "Array.h"

using namespace std;

int main()
{
    Array integers1(7); // yedi elemanlı dizi
    Array integers2; // varsayılan 10 elemanlı dizi

    // integers1 boyut ve içeriği
    cout << "integers1 Array boyutu eşittir " << integers1.getSize()
        << "\nArray dizi oluşturulduktan sonra:\n" << integers1;

    // integers2 boyut ve içeriği
    cout << "\nintegers2 Array boyutu eşittir " << integers2.getSize()
        << "\nArray dizi oluşturulduktan sonra:\n" << integers2;

    // integers1 ve integers2 için değer gir ve yazdır
    cout << "\n17 adet tamsayı giriniz:" << endl;
    cin >> integers1 >> integers2;

    cout << "\nArray için değerler girildikten sonra değerler:\n"
        << "integers1:\n" << integers1
        << "integers2:\n" << integers2;

    // Aşırı yüklü eşitsizlik (!=) operatörünü kullanmak
    cout << "\nDeğerlendirme: integers1 != integers2" << endl;

    if(integers1 != integers2)
        cout << "integers1 ve integers2 eşit değil" << endl;

    // integers3, integers1'i kullanarak oluşsun
    // başlangıç, boyutu ve içeriği yazdır
    Array integers3(integers1); // kopya kurucuyu çağır

    cout << "\nintegers3 Array boyutu eşittir " << integers3.getSize()
        << "\noluşturulduktan sonra Array:\n" << integers3;

    // aşırı yüklü atama (=) operatörünü test etme
    cout << "\nintegers1'e integers2'yi atama:" << endl;
    integers1 = integers2; // hedef dizi daha küçük

    cout << "integers1:\n" << integers1
        << "integers2:\n" << integers2;

    // aşırı yüklü eşitlik (==) operatörünü test etme
    cout << "\nDeğerlendirme: integers1 == integers2" << endl;

    if(integers1 == integers2)
        cout << "integers1 ve integers2 eşittir" << endl;

    // aşırı yüklenmiş indis operatörünü kullanarak sağ değer oluşturmak
    cout << "\nintegers1[5] : " << integers1[5];

    // aşırı yüklenmiş indis operatörünü kullanarak sağ değer oluşturmak
    cout << "\n\nintegers1[5]'e 1000 değerini atamak" << endl;
    integers1[5] = 1000;
    cout << "integers1:\n" << integers1;

    // indis değerinin dizi sınıflarını aşmasının test edilmesi
    try
    {
        cout << "\nintegers1[15]'e 1000 değerini atama girişimi" << endl;
        integers1[15] = 1000; // HATA: indis aralık dışında
    }
    catch(out_of_range &ex)
    {
        cout << "İstisna oluştu: " << ex.what() << endl;
    }
}