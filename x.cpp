#include <iostream>
#include <string>


//函数
    int add(int bb,int cc)
    {
        int aa=bb+cc;
        return aa;
    }


int main()
{

    std::string str = "Li jiale";
    std::cout << str << std::endl;

    int a = 10;
    a += 2;
    std::cout << a << std::endl;

    int b = 10;
    int c = 12;
    std::cout << (a != b) << std::endl;
    std::cout << (a != c) << std::endl;
    std::cout << (a != b && a != c) << std::endl;
    std::cout << (a != b || a != c) << std::endl;

    int d=10;
    int e=20;
    std::cout << (d<e?d:e) << std::endl;
    std::cout << (d<e?e:d) << std::endl;


    /*而 bool 只有两个可能值：true 和 false。
    用 switch 处理只有两种情况的逻辑，
    属于用牛刀杀鸡，而且容易写错。
    所以编译器提醒你：
    这种情况更适合用 if-else。
    逻辑上是对的，但不推荐这么写。
    */
    switch (static_cast<int>(d < e))
    {
    case 1:
        std::cout << d << std::endl;
    break;
    
    default:
        std::cout << e <<std::endl;
        break;
    }

    int num1=100;
    int num2=20;
    int cc = add(num1,num2);
    std::cout << cc << std::endl;

    return 0;
    return 0;
}









