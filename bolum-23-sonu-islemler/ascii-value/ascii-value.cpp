// Slavnem @2024-11-29 22:49 Debian 12
// ASCII Value

// Headers
#include <iostream>
#include <iomanip>

// Not Official!
#define _ASCII_MIN_ 33
#define _ASCII_MAX_ 126

using namespace std;

// main
int main()
{
    cout << internal << "Char " << "Dec " << "Oct " << "Hex" << endl;

    for(int i = _ASCII_MIN_; i <= _ASCII_MAX_; i++)
    {
        cout << static_cast<char>(i) << ": "
            << dec << i << ", "
            << oct << i << ", "
            << hex << i << endl;
    }

    return 0;
}