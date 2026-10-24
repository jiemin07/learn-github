#include <iostream>

int main()
{

    for (int num = 1; num <= 10; num++)
    {
        int square = 0;
        square = num * num;
        std::cout << square << std::endl;
    }

    return 0;
}