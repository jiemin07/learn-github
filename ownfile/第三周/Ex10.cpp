#include <iostream>

int main()
{
    int sum = 0;

    for (int n = 0; n <= 101; n++)
    {
        if (n % 2 == 0)
        {
            sum += n;
        }
    }
    std::cout << sum << std::endl;

    return 0;
}