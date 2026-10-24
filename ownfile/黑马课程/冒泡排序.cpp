#include <iostream>

int main()
{

    int arr[] = {4, 1, 3, 7, 9, 0, 5, 6, 8};
    for (int i = 0; i < 9; i++)
    {

        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    //写出数组

    for (int i = 0; i < 8; i++)
    //外层循环8次
    {
        for (int j = 0; j < 8 - i; j++)
        //内层循环8-i次
        {
            if (arr[j] > arr[j + 1])//如果前大于后，交换位置
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 9; i++)
    {

        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}