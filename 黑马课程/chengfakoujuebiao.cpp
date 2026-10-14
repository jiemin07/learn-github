#include <iostream>

int main()
{
    // 乘法口诀表
    for (int i = 1; i <= 9; i++) // 要求行
    {
        for (int j = 1; j <= i; j++) // 要求列
        {
            std::cout << i << "*" << j << "=" << i * j << "   ";
        }
        std::cout << std::endl;
    }
    return 0;
}