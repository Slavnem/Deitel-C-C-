// Slavnem @2024-07-12
// Fatura Sınıfı İle İlgili İşlemler

// Kütüphaneler
#include "Fatura.h"

// Sınıf Başlangıcı
Fatura::Fatura(string pNumara, string pTanim, int miktar, int fiyat)
{
    setParcaNumara(pNumara);
    setParcaTanim(pTanim);
    setUrunMiktar(miktar);
    setFiyatBilgi(fiyat);
}

// Set Fonksiyonlar
// parça numarası
void Fatura::setParcaNumara(string pNumara)
{
    // geçerli uzunluktaki metini kabul etsin
    if(pNumara.length() > 0)
        parcaNumarasi = pNumara;
}

// parça tanımı
void Fatura::setParcaTanim(string pTanim)
{
    // geçerli uzunluktaki metini kabul etsin
    if(pTanim.length() > 0)
        parcaTanimi = pTanim;
}

// ürün miktarı
void Fatura::setUrunMiktar(int miktar)
{
    // geçerli miktar ise
    if(miktar > 0)
    {
        urunMiktari = miktar;
        return;
    }
    // eğer ürün miktarı boşsa sıfırlasın
    else if(urunMiktari <= 0)
        urunMiktari = 0;

    // ürün miktarını arttır
    urunMiktari++;
}

// fiyat bilgisi
void Fatura::setFiyatBilgi(int fiyat)
{
    // geçerli bir fiyat girilmişse o fiyat, değilse 1
    fiyatBilgisi = (fiyat > 0) ? fiyat : 1;
}

// parça numarası bilgisi getirtme
string Fatura::getParcaNumara()
{
    return parcaNumarasi;
}

// parça tanımı bilgisi getirtme
string Fatura::getParcaTanim()
{
    return parcaTanimi;
}

// ürün miktarı bilgisini getirtme
int Fatura::getUrunMiktar()
{
    return urunMiktari;
}

// fiyat bilgisi bilgisini getirtme
int Fatura::getFiyatBilgi()
{
    return fiyatBilgisi;
}

// fatura miktarını hesaplama
int Fatura::getFaturaMiktari()
{
    return (getFiyatBilgi() * getUrunMiktar());
}