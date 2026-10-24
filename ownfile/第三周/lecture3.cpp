#include <iostream>
#include <iomanip>

int main()
{
    double score = 0;
    double average = 0;
    int count = 0;
    int choice = 0;
    double sum = 0;

    do
    {
        // 选择选项
        std::cout << "1.Enter score\n2.Show average\n3.Quit\nChoice:\n";
        while (!(std::cin >> choice) || choice < 1 || choice > 3)
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Invalid.Try again";
        }

        switch (choice)
        {
        // 1.输入分数
        case 1:
            std::cout << "Score (0-100): ";
            while (!(std::cin >> score) || score < 0 || score > 100)
            {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cout << "Invalid.Try again";
            }
            count++;
            sum += score;
            average = sum / count;
            break;
        // 2.计算平均值
        case 2:
            std::cout << "The average is: " << std::fixed << std::setprecision(2) << average << std::endl;
            if (average >= 90)
            {
                std::cout << "(A)\n";
            }
            else if (average >= 80)
            {
                std::cout << "(B)\n";
            }
            else if (average >= 70)
            {
                std::cout << "(C)\n";
            }
            else if (average >= 60)
            {
                std::cout << "(D)\n";
            }
            else
            {
                std::cout << "(F)\n";
            }
            break;
        // 3.结束程序
        case 3:
            std::cout << "拜拜嘞您内" << std::endl;
            break;
        }

    } while (choice != 3);

    return 0;
}