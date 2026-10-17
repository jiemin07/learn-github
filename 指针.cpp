#include <iostream>

int main()
{
    std::cout << sizeof(int *) << std::endl;
    int a = 10;
    std::cout << (long long)&a << std::endl;
    int *p;
    std::cout << sizeof(p) << std::endl;
    std::cout << sizeof(double *) << std::endl;

    p = &a;

    std::cout << p << std::endl;
//love
    return 0;
}