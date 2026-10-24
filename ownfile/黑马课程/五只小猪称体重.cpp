#include <iostream>
int main()
{
    int arr[] = {100, 200, 300, 400, 500, 600};
    int max = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
std::cout << max << std::endl;
    return 0;
}