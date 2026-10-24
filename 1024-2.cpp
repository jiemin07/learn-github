#include <iostream>

int main()
{
    int n = 0;
    int score = 0;
    int maxscore = 0;

    std::cin >> n;
    std::cin >> maxscore;

    for (int i = 0; i < (n-1); i++)
    {
        std::cin >> score;
        if (score > maxscore)
        {
            maxscore = score;
        }
    }

std::cout << maxscore << std::endl;

    return 0;
}