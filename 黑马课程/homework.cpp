#include<iostream>

int main()
{
    //Ex1 — Ten Times the Input
    int x;
    std::cin >> x;
    std::cout << x*10 << "\n";

    //Ex2 — Area of a Circle
    double radius;
    double pi = 3.1415926;
    std::cin >> radius;
    std::cout << radius*radius*pi <<"\n";

    //Ex3 — Seconds to hh:mm:ss
    int seconds;
    int h,m,s;
    std::cin >> seconds;
    std::cout << seconds/3600 << ":" << seconds%3600/60 << ":" << seconds%3600%60 << "\n";

    //Ex4 — Split a Three-Digit Number
    int number;
    std::cin >> number;
    std::cout << number/100 << " " << number/10%10 << " " << number%10 << std::endl;
    
    return 0;
}