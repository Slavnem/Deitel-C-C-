// Slavnem @2024-07-07

// Kütüphaneler
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

// Fonksiyon prototipleri
void inputVector(vector<int> &);
void outputVector(const vector<int> &);

// main
int main()
{
    vector<int> integers1(7); // 7-vector<int> elemanı
    vector<int> integers2(10); // 10-vector<int> elemanı

    // integers1 boyut ve içeriğini yazdır
    cout << "integers1 vektor boyutu: " << integers1.size()
    << "\nvektor icerigi:" << endl;
    outputVector(integers1);

    // integers2 boyut ve içeriğini yazdır
    cout << "\nintegers2 vektor boyutu: " << integers2.size()
    << "\nvektor icerigi:" << endl;
    outputVector(integers2);

    // integers1 ve integers2 giriş olarak al ve yazdır
    cout << "\n17 adet tamsayi giriniz:" << endl;
    inputVector(integers1);
    inputVector(integers2);

    cout << "\nVeri eklendikten sonra:\n"
    << "integers1:" << endl;
    outputVector(integers1);
    cout << "integers2:" << endl;
    outputVector(integers2);

    // eşitsizlik (!=) operatörünü vector nesneleriyle kullanmak
    cout << "\nDegerlendirme: integers1 != integers2" << endl;

    if(integers1 != integers2)
    cout << "integers1 ve integers2 esit degildir" << endl;

    // integers1'i yükleyici olarak kullanan integers3'ü oluştur
    // boyut ve içeriğini yazdır
    vector<int> integers3(integers1); // kopya oluşturucu

    cout << "\nintegers3 vektor boyutu: " << integers3.size()
    << "\nvektor icerigi:" << endl;
    outputVector(integers3);

    // aşırı yüklenmiş atama (=) operatörü kullanımı
    cout << "\nintegers1'e integers2'yi atamak:" << endl;
    integers1 = integers2;

    cout << "integers1:" << endl;
    outputVector(integers1);
    cout << "integers2:" << endl;
    outputVector(integers2);

    // eşitlik operatörünü (==) vector nesneleriyle kullanmak
    cout << "\nDegerlendirme: integers1 == integers2" << endl;

    if(integers1 == integers2)
    cout << "integers1 ve integers2 esittir" << endl;

    // rvalue oluşturmak için köşeli parantezler kullanmak
    cout << "\nintegers1[5]: " << integers1[5];

    // lvalue oluşturmak için köşeli parantezler kullanmak
    cout << "\n\n1000 degerini integers1[5]'e atamak" << endl;
    integers1[5] = 1000;
    cout << "integers1:" << endl;
    outputVector(integers1);

    // aralık dışı indis kullanmaya çalışmak
    try
    {
        cout << "\nintegers1.at(15) gosterme uyarisi" << endl;
        cout << integers1.at(15) << endl;
    }
    catch(out_of_range &ex)
    {
        cout << "Istisna olustu:" << ex.what() << endl;
    }
}

// vector içeriklerinin çıktısı
void outputVector(const vector<int> &array)
{
    size_t i; // kontrol değişkeni tanımlamak

    for(i = 0; i < array.size(); ++i)
    {
        cout << setw(12) << array[i];

        if((i + 1) % 4 == 0) // çıktının her satırı için 4 sayı
        cout << endl;
    }

    if(i % 4 != 0)
    cout << endl;
}

// vector içeriklerinin girişi
void inputVector(vector<int> &array)
{
    for(size_t i = 0; i < array.size(); ++i)
        cin >> array[i];
}