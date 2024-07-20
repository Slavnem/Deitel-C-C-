// Slavnem @2024-07-20
// Standart Kütüphane karakter dizini sınıfı test programı

// Kütüphaneler
#include <iostream>
#include <string>

using namespace std;

// main
int main()
{
    string s1("happy");
    string s2(" birthday ");
    string s3;

    // aşırı yüklenmiş eşitlik ve ilişkisel
    // operatörlerin test edilmesi
    cout << "s1: \"" << s1 << "\", s2: \"" << s2
        << "\", s3: \"" << s3 << '\"'
        << "\n\ns2 ve s1 karşılaştrırma sonucu:"
        << "\ns2 == s1 " << (s2 == s1 ? "evet" : "hayır")
        << "\ns2 != s1 " << (s2 != s1 ? "evet" : "hayır")
        << "\ns2 >  s1 " << (s2 >  s1 ? "evet" : "hayır")
        << "\ns2 <  s1 " << (s2 <  s1 ? "evet" : "hayır")
        << "\ns2 >=  s1 " << (s2 >=  s1 ? "evet" : "hayır")
        << "\ns2 <=  s1 " << (s2 <=  s1 ? "evet" : "hayır");

    // empyt (boş) üye fonksiyonunu test etme
    cout << "\n\ns3.empty() test:" << endl;

    if(s3.empty())
    {
        cout << "s3 boştur. s1, s3'e atanıyor" << endl;
        s3 = s1; // s1'i s3'e atama
        cout << "s3 \"" << s3 << "\"";
    }

    // aşırı yüklenmiş ekleme operatörünü test etme
    cout << "\n\ns1 += s2, s1 = ";
    s1 += s2; // aşırı yüklenmiş birleştirmeyi test etme
    cout << s1;

    // aşırı yüklenmiş karakter dizini birleştirme operatörünü
    // char * karakter dizini ile test etme
    cout << "\n\ns1 += \" to you\", " << endl;
    s1 += " to you";
    cout << "s1 = " << s1 << "\n\n";

    // substr üye fonksiyonunu test etme
    cout << "s1 için substr 0. karakterden 14. karaktere kadar, s1.substr(0,14):\n"
        << s1.substr(0, 13) << "\n\n";

    // substr "karakter dizini sonu" test seçeneği
    cout << "s1 başlatılıyor ve 15'e kadar devam ediyor:\n"
        << s1.substr(14) << endl;

    // kopya kurucuyu test etme
    string s4(s1);
    cout << "\ns4 = " << s4 << "\n\n";

    // aşırı yüklü atama(=) operatörünü öz atama ile test etme
    cout << "s4'ü s4'e atama" << endl;
    s4 = s4;
    cout << "s4 = " << s4 << endl;

    // aşırı yüklü [] operatörünün lvalue üretmek için test edilmesi
    s1[0] = 'H';
    s1[6] = 'B';
    cout << "\ns1, s1[0] = 'H' ve s1[6] = 'B' den sonra: " << s1 << "\n\n";

    // karakter dizini üye fonksiyon "at" ile out_of_range mesajının test edilmesi
    try
    {
        cout << "'d' yi s1.at(30) yapma hatası:" << endl;
        s1.at(30) = 'd'; // Hata: indis aralık dışında
    }
    catch(out_of_range &ex)
    {
        cout << "İstisna oluştu: " << ex.what() << endl;
    }   
}