#include <iostream>

int main()
{
    int m = 0;
    int n = 0;
    int total = 0;
    std::cin >> m >> n;

    for (int odd = m; odd <= n; odd++)
    {
        if (odd % 2 == 1)
        {
            total = total + odd;
        }
    }
    std::cout << total << std::endl;

    return 0;
}