#include <iostream>
#include <string>

struct student
{
    std::string name;
    int age;
    int score;
};

struct teacher
{
    std::string ID;
    std::string name;
    int age;
    // 嵌套结构体
    student s;
};

int main()
{
    teacher t;
    t.ID = "000001";
    t.name = "Jimmy";
    t.age = 35;
    t.s.name = "乐乐";
    t.s.age = 18;
    t.s.score = 100;
    std::cout << t.ID << "\n" << t.name << "\n" << t.age << "\n" << t.s.name << "\n" << t.s.age << "\n" << t.s.score << std::endl;

    return 0;
}
