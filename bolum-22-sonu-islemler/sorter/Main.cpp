// Slavnem @2024-10-07
// Main

// Kütüphaneler
#include <iostream>
#include "Sorter.h"

using namespace std;

// main
int main()
{
    double myDoubArr[] = { 2.3, 4.7, 1.2, 1.8, 9.3, 0.2 };
    int myIntArr[] = { 1, 8, 4, 3, 9, 0, 6 };

    // ilk diziyi sıralama için
    Sorter< double, sizeof(myDoubArr) / sizeof(myDoubArr[0])> mySortDoub(myDoubArr);

    // diziyi sırala
    mySortDoub.selectionSort();

    // çıktı ver
    mySortDoub.print();

    // ikinci diziyi sıralama için
    Sorter< int, sizeof(myIntArr) / sizeof(myIntArr[0]) > mySortInt(myIntArr);

    // diziyi sırala
    mySortInt.selectionSort();

    // çıktı ver
    mySortInt.print();
}