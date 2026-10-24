#include <iostream>

template <typename T>
T add(int num1, int num2)
// num1,num2，没有真实数据，形参
{
    T sum = num1 + num2;
    return sum;
}


int main()
{
    int a = 10;
    int b = 20;
    // a,b实参

    int c = add(a, b);
    std::cout << "c = " << c << std::endl;

    return 0;
}