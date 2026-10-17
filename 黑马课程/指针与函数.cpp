#include <iostream>

void bubble(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len -i- 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printarr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // std::cout << sizeof(arr) << std::endl;
    int len = sizeof(arr) / sizeof(arr[1]);

    bubble(arr, len);
    printarr(arr, len);

    return 0;
}