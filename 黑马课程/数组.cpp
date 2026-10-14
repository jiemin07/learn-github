#include <iostream>
int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        std::cout << array[i] << std::endl;
    }

    int array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int j = 0; j < 10; j++)
    {
        std::cout << array2[j] << std::endl;
    }

    return 0;
}