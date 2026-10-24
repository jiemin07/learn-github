#include <iostream>

int main()
{
    for (int a = 0; a <= 10; a++)
    {
        for (int i = 0; i <= 10; i++)
        {
            if (i == 5)
            {
                break;
            }
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}