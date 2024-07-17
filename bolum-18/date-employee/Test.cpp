// Slavnem @2024-07-17
// Test

// Kütüphaneler
#include <iostream>
#include "Employee.h"

using namespace std;

// main
int main()
{
    Date birth(7, 24, 1949);
    Date hire(3, 12, 1988);
    Employee manager("Bob", "Blue", birth, hire);

    cout << endl;
    manager.print();
}