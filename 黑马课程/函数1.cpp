#include <iostream>

int add(int num1, int num2)
// num1,num2，没有真实数据，形参
{
    int sum = num1 + num2;
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