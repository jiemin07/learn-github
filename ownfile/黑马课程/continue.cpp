#include <iostream>

int main()
{
    for (int i = 2; i <= 100; i++)
    {
        if (i % 2 == 1)
        {
            continue;//continue 不继续下面的代码，继续进行循环
        }            //可以做筛选
        std::cout << i << std::endl;
    }

    return 0;
}