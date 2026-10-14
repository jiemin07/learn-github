#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;

    if (n <= 2)
    {
        std::cout << "(no primes less than " << n << ")" << std::endl;
    }

    else
    {
        for (int m = 2; m < n; m++)
        {
            int i = 2;
            for (; i * i <= m; i++)
            {
                if (m % i == 0)
                    break;
            }
            if (i * i > m)
                std::cout << m << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}