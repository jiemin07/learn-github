#include <iostream>

int main()
{
    int n = 0;
    int sum = 0;

    std::cin >> n;
    if (n >= 0 && n <= 1000)
    {
        int count = 0;
        while (count < n)
        {
            count++;
            sum += count;
        }
        std::cout << sum << std::endl;
    }
    else
    {
        std::cout << "(error message, no sum)" << std::endl;
        }

    return 0;
}