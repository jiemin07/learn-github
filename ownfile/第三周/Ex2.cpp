#include <iostream>

int main()
{
    int x = 0;

    std::cin >> x;
    if (x % 2 == 0)
    {
        int cube = 0;
        cube = x * x * x;
        std::cout << cube << std::endl;
    }
    else
    {
        int square = 0;
        square = x * x;
        std::cout << square << std::endl;
    }

    return 0;
}