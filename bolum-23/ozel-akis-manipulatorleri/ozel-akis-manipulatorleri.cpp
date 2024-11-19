// Slavnem @2024-11-19 06:30 FreeBSD
// Kullanıcı Tanımlı Parametresiz Akış Manipülatörleri Oluşturma ve Test Etmek

// Kütüphaneler
#include <iostream>
using namespace std;

// bell manipülatörü (kaçış karakteri \a kullanılmaktadır)
ostream& bell(ostream& output)
{
    return output << '\a'; // sistem sesi kullanılır
}

// carriageReturn manipülatörü (\r kaçış karakteri kullanılmaktadır)
ostream& carriageReturn(ostream& output)
{
    return output << '\r'; // satır başına dönüş durum
}

// tab manipülatörü (\t kaçış karakteri kullanılmaktadır)
ostream& tab(ostream& output)
{
    return output << '\t'; // sekme durumu
}

// endLine manipülatörü (\n kaçış karakteri kullanılmaktadır)
// flush akım manipülatörü kullanılarak da endl simule edilmektedir
ostream& endLine(ostream& output)
{
    return output << '\n' << flush; // satır sonu durumu
}

// main
int main()
{
    // tab e endLine manipülatörleri kullanılıyor
    cout << "Testing the tab manipulator:" << endLine
	<< 'a' << tab << 'b' << tab << 'c' << endLine;

    cout << "Testing carriageReturn and bell manipulators:"
	<< endLine << "..........";

    cout << bell; // bell manipülatörü kullanılıyor

    // ret ve endLine manipülatörü kullanılıyor
    cout << carriageReturn << "-----" << endLine;
}
