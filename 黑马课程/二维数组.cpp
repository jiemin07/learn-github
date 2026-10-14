#include <iostream>

int main()
{

    int arr[2][3] = {
        {1, 2, 3},
        {7, 8, 9}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << arr[i][j] << std::endl;
        }
    }

    std::cout << (long)arr[0] << std::endl;
    std::cout << (long)&arr[0][1] << std::endl;

    return 0;
}