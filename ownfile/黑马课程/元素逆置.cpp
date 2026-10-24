#include <iostream>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int temp = array[0];
    for (int i = 0; i < 5; i++)
    {
        std::cout << array[i] << std::endl;
    }
    int start = 0;
    int end = sizeof(array) / sizeof(array[0]) - 1;
    std::cout << std::endl;

    while (start < end)
    {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout << array[i] << std::endl;
    }

    return 0;
}
