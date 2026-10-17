#include <iostream>
#include <string>

struct student
{
    std::string name;
    int age;
    int score;
};

int main()
{
    struct student arr[3]=
    {
        {"乐乐",18,100},
        {"",19,80},
        {"",20,98}
    };

    std::string name2;
    std::string name3;

    std::getline(std::cin,name2);
    std::getline(std::cin,name3);

    arr[1].name=name2;
    arr[2].name=name3;

    for(int i=0;i<3;i++)
    {
        std::cout << "name: " << arr[i].name << "\n" << "age: " << arr[i].age << "\n" << "score: " << arr[i].score << "\n" << std::endl;
    }

    return 0;
}