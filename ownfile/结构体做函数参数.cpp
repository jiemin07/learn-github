#include<iostream>
#include<string>

struct student
{
    std::string name;
    int score;    
};

void print1(struct student s)
{
    s.score = 200;
    std::cout << "子函数1中" << "\n" << "姓名：" << s.name << "\n" << "分数：" << s.score << "\n" << std::endl;
}

void print2(struct student *p)
{
    p->score = 200;
    std::cout << "子函数2中" << "\n" << "姓名：" << p->name << "\n" << "分数：" << p->score << "\n" << std::endl;
}

int main()
{
    struct student s;
    s.name = "张三";
    s.score = 100;

    // print1(s);
    print2(&s);

    std::cout << "main函数中" << "\n" << "姓名：" << s.name << "\n" << "分数：" << s.score << std::endl;
    
    return 0;
}