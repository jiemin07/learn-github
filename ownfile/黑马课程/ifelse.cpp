//双分枝的if-else语句
#include<iostream>

int main()
{
    double radius;
    double area;
    const double pi = 3.1415926;
    std::cin >> radius;
    if (radius >= 0)
    {
        area = radius*radius*pi;
        std::cout << "The area for the circle of radius" << radius << "is" << area << std::endl;
    }
    else
    {
        std::cout << "negative radius" << std::endl;
    }

    //如果只有一个语句，大括号可以省略
    int num;
    std::cin >> num;
    if (num % 2 == 0)
    std::cout << num << " is even" << std::endl;
   else 
    std::cout << num << " is odd" << std::endl;

    //嵌套的if-else语句
    double score;
    std::cin >>score;
    if (score >= 90.0)
    std::cout << "grade is A" << std::endl;
    else if (score >= 80.0)
    std::cout << "grade is B" << std::endl;
    else if (score >= 70.0)
    std::cout << "grade is C" << std::endl;
    else if (score >= 60.0)
    std::cout << "grade is D" << std::endl;
    else
    std::cout << "grade is F" << std::endl;

    return 0;
}