#include <iostream>

int main()
{
    int ASCII = 65;

    do
    {
        std::cout << (char)ASCII;
        ASCII++;
    } while (ASCII <= 90);
    std::cout << "\n";

    return 0;
}