// Slavnem @2024-07-05

template <class T> // veya template <typename T>
T maximum(T value1, T value2, T value3)
{
    // value1 değerinin en yüksek olduğunu varsay
    T maximumValue = value1;

    // value2'nin değeri en yüksek değerden büyük mü kontrol et
    if(value2 > maximumValue)
        maximumValue = value2;

    // value3'nin değeri en yüksek değerden büyük mü kontrol et
    if(value3 > maximumValue)
        maximumValue = value3;

    return maximumValue;
}