#include <iostream>
#include <string>

int main()
{

    std::string str = "Li jiale";
    std::cout << str << std::endl;

    int a = 10;
    a += 2;
    std::cout << a << std::endl;

    int b = 10;
    int c = 12;
    std::cout << (a != b) << std::endl;
    std::cout << (a == c) << std::endl;
    std::cout << (a != b && a == c) << std::endl;
    std::cout << (a != b || a != c) << std::endl;
    return 0;
}