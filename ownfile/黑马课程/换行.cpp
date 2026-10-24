#include <iostream>

int main()
{
    int n = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        std::cout << i;
        // 永不终止
    }
}
