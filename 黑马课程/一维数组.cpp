#include <iostream>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    std::cout << sizeof(arr) << std::endl;
    std::cout << sizeof(arr[1]) << std::endl;
    std::cout << sizeof(arr) / sizeof(arr[0]) << std::endl
              << std::endl;

    std::cout << (long)arr << std::endl;
    std::cout << (long)&arr[0] << std::endl;
    std::cout << (long)&arr[1] << std::endl;
    //&:取地址运算符
    return 0;
}