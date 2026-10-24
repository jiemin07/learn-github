#include <iostream>

int main()
{

    int x = 0;
    int square = 0;
    std::cin >> x;
    if (x > 0)
    {
        std::cout << x << std::endl;
    }
    else
    {
        square = x * x;
        std::cout << square << std::endl;
    }
    return 0;
}
