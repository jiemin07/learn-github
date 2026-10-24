#include <iostream>
#include <string>

struct student
{
    std::string name;
    int age;
    int score;
} s3;
// 1 struct student si
// 2 struct student s2={...}
// 3

int main()

{ // 1
    struct student s1;
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
    std::cout << "姓名: " << s1.name << "\n"
              << "年龄: " << s1.age << "\n"
              << "分数: " << s1.score << "\n"
              << std::endl;

    // 2
    student s2 = {"李四", 19, 80};
    std::cout << "姓名: " << s2.name << "\n"
              << "年龄: " << s2.age << "\n"
              << "分数: " << s2.score << "\n"
              << std::endl;

    // 3
    s3.name = "王五";
    s3.age = 20;
    s3.score = 70;
    std::cout << "姓名: " << s3.name << "\n"
              << "年龄: " << s3.age << "\n"
              << "分数: " << s3.score << std::endl;

    return 0;
}