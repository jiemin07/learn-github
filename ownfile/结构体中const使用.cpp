#include <iostream>
#include <string>

struct student
{
    std::string name;
    int age;
    int score;
};

void print(const student *s)
{
    // s->score = 200;
    // 用const修改，对修改的操作，报错！！
    // 用const修饰，防止误操作
    std::cout << "\n"
              << "姓名：" << s->name << "\n"
              << "年龄：" << s->score << "\n"
              << "分数：" << s->score << "\n"
              << std::endl;
}

int main()
{
    struct student s = {"zhangsan", 15, 70};

    print(&s);
    //用地址

    return 0;
}