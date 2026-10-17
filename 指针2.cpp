#include <iostream>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = arr;
    
    std::cout << p << std::endl;

    std::cout << arr << std::endl;

    std::cout << (long)arr << std::endl;

    std::cout << arr[0] << std::endl;

    for(int i=0;i<10;i++)
    {
        std::cout << *p << std::endl;
        p++;

    }

    return 0;
}