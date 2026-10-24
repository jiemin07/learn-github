#include <iostream>
#include <string>

struct student
{
    std::string name;
    int age;
    int score;
};

int main()

{ // 创建结构体变量
    struct student s = {"xxx", 18, 100};

    // 指针指向结构体变量
    struct student *p = &s;
    
    // 指针访问结构体变量
    std::cout << "name: " << p->name << "\n" << "age: " << p->age << "\n" << "score: " << p->score << std::endl;
    
    return 0;
}