#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

struct Student
{
    std::string sName;
    int score;
};

struct Teacher
{
    std::string tName;
    Student sArray[5];
};

void allocate(Teacher tArray[3], int len)
{
    std::string nameseed = "ABCDE";

    for (int i = 0; i < len; i++)
    {
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameseed[i];

        for (int j = 0; j < 5; j++)
        {
            tArray[i].sArray[j].sName = "Student_";
            tArray[i].sArray[j].sName += nameseed[j];

            int random = rand() % 61 + 40;
            tArray[i].sArray[j].score = random;
        }
    }
}

void print(Teacher tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        std::cout << "老师姓名：" << tArray[i].tName << std::endl;

        for (int j = 0; j < 5; j++)
        {
            std::cout << "\t学生姓名：" << tArray[i].sArray[j].sName << " "
                      << "学生成绩：" << tArray[i].sArray[j].score << std::endl;
        }
    };
}
int main()
{
    srand((unsigned int)time(NULL));

    // 创建老师的数组
    Teacher tArray[3];

    int len = sizeof(tArray) / sizeof(tArray[1]);
    allocate(tArray, len);

    // 打印信息
    print(tArray, len);

    return 0;
}