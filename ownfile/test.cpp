#include <iostream>

void add(int a, int b)
{
    std::cout << a + b << std::endl;
};

int main()
{
    int total = add(10, 20);
    return 0;
}