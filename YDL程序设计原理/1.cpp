#include<iostream>
int main()
{
    double radius,area;
    double num1, num2, num3, average;

    /*计算单个圆的面积*/
    std::cout << " Enter a radius: ";
    std::cin >> radius;
    area = radius * radius * 3.14159;
    std::cout << "This area is " << area << std::endl;

    //计算三个数的平均值
    std::cout << " Enter three numbers ";
    std::cin >> num1 >> num2 >> num3;
    average = (num1 + num2 + num3)/3;
    std::cout << " The average of " << num1 << " number1 " << num2 << " number2 " <<num3 << " number "
              << "is " << average <<std::endl;

    return 0;
}