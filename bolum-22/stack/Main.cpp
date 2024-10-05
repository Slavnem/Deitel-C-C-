// Slavnem @2024-10-06
// Main

// Kütüphaneler
#include <iostream>
#include "Stack.h"

using namespace std;

// main
int main()
{
    Stack< double > doubleStack(5); // eleman sayısı 5
    double doubleValue = 1.1;

    cout << "Pushing element onto doubleStack\n";

    // 5 double sayıyı doubleStack'e ekle
    while(doubleStack.push(doubleValue))
    {
        cout << doubleValue << ' ';
        doubleValue += 1.1;
    }

    cout << "\nStack is full. Cannot push " << doubleValue
        << "\n\nPopping elements from doubleStack\n";

    // doubleStack'den elemanları çıkar
    while(doubleStack.pop(doubleValue))
        cout << doubleValue << ' ';

    cout << "\nStack is empty. Cannot pop\n";

    Stack< int > intStack; // varsayılan eleman sayısı 10
    int intValue = 1;
    cout << "\nPushing element onto intStack\n";

    // intStack'e 10 tamsayı ekle
    while(intStack.push(intValue))
    {
        cout << intValue++ << ' ';
    }

    cout << "\nStack is full. Cannot push " << intValue
        << "\n\nPopping elements from intStack\n";

    // intStack'den elemanlar çıkartılıyor
    while(intStack.pop(intValue))
        cout << intValue << ' ';

    cout << "\nStack is empty. Cannot pop" << endl;
}