#include <iostream>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    std::cin >> a >> b >> c;
    if (a >= b)
    {
        if (a >= c)
        {
            std::cout << a << std::endl;
        }
        else
        {
            std::cout << c << std::endl;
        }
    }
    else
    {
        if (b >= c)
        {
            std::cout << b << std::endl;
        }
        else
        {
            std::cout << c << std::endl;
        }
    }

    return 0;
}