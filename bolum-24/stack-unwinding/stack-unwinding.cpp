// Slavnem @2024-11-05 00:38 Debian 12
// Stack Unwinding (Yığın Geri Sarımı)

// C++ 17 Not Supporting Dynamic Exception Specifications: void function1() throw (runtime_error)
// Compile: g++ -std=c++11 -Wno-deprecated stack-unwinding.cpp -o build/stack-unwinding.linux

// Kütüphaneler
#include <iostream>
#include <stdexcept>
using namespace std;

// function3 runtime error fırlatır
void function3() throw (runtime_error)
{
    cout << "In function 3" << endl;

    // try bloğu olduğunda yığın geri sarımı oluşur,
    // program akışı function2'den devam eder
    throw runtime_error("runtime_error in function 3");
}

// function2, function3'ü çağırır
void function2() throw (runtime_error)
{
    cout << "function3 is called inside function2" << endl;
    function3(); // yığın geri sarımı oluşur, program akışı function1'den devam eder
}

// function1, function2'yi çağırır
void function1() throw (runtime_error)
{
    cout << "function2 is called inside function1" << endl;
    function2(); // yığın geri sarımı oluşur, program akışı main'den devam eder
}

// main
int main()
{
    // function1'i çağır
    try
    {
        cout << "function1 is called inside main" << endl;
        function1(); // runtime_error fırlatan function1'i çağır
    }
    catch(runtime_error &error) // runtime_error istisnasını işle
    {
        cout << "Exception occured: " << error.what() << endl;
        cout << "Exception handled in main" << endl;
    }
}