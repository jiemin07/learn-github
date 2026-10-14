#include <iostream>

int main()
{
    int score = 0;
    std::cin >> score;
    if (score < 0 || score > 100)
        std::cout << "(error message, no grade)" << std::endl;
    else if (score >= 90)
    {
        std::cout << "A+" << std::endl;
    }
    else if (score >= 80)
    {
        std::cout << "A" << std::endl;
    }
    else if (score >= 70)
    {
        std::cout << "B" << std::endl;
    }
    else if (score >= 60)
    {
        std::cout << "C" << std::endl;
    }
    else
    {
        std::cout << "F" << std::endl;
    }
    return 0;
}