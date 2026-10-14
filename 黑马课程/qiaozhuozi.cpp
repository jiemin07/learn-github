#include <iostream>

int main()
{
    for (int a = 1; a <= 100; a++)
    {
        if (a % 7 == 0 || a % 10 == 7 || a / 10 == 7)
        {
            std::cout << a << "敲桌子" << std::endl;
        }
        else
        {
            std::cout << a << std::endl;
        }
    }

    return 0;
}