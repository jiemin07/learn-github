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
    std::cout << (a != c) << std::endl;
    std::cout << (a != b && a != c) << std::endl;
    std::cout << (a != b || a != c) << std::endl;

    int d=10;
    int e=20;
    std::cout << (d<e?d:e) << std::endl;
    std::cout << (d<e?e:d) << std::endl;

    switch (static_cast<int>(d < e))
    {
    case 1:
        std::cout << d << std::endl;
    break;
    
    default:
        std::cout << e <<std::endl;
        break;
    }
    return 0;
}