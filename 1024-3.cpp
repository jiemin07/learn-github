#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    int output[29];
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        std::cin >> x;
        if (x <= 2)
        {
            output[i] = 1;
        }
        else
        {
            int num1 = 1;
            int num2 = 1;

            for (int m = 0; m < x - 2; m++)
            {
                int temp = 0;
                temp = num2;
                num2 = num1 + num2;
                num1 = temp;
            }
            output[i] = num2;
        }
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << output[i] << std::endl;
    }
    return 0;
}