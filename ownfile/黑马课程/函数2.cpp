#include <iostream>

void swap(int num1, int num2)
{
    std::cout << "交换前：" << std::endl;
    std::cout << "num1=" << num1 << std::endl;
    std::cout << "num2=" << num2 << std::endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    std::cout << "交换后：" << std::endl;
    std::cout << "num1=" << num1 << std::endl;
    std::cout << "num2=" << num2 << std::endl;
    // 返回值不需要时，不用写return，写void
}

int main()
{
    int a = 10;
    int b = 20;

    swap(a, b);

    std::cout << a << std::endl;
    std::cout << b << std::endl;
        
    return 0;
}