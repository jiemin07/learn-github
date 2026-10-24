#include<iostream>
#include<string>

struct hero
{
    std::string name;
    int age;
    std::string sex;
};





int main()
{
    hero arr[5]=
    {
        {"A",19,"man"},
        {"B",48,"woman"},
        {"C",28,"man"},
        {"D",22,"man"},
        {"E",20,"woman"}
    };

    int len = sizeof(arr)/sizeof(arr[0]);
    
    for(int i;i<5;i++)
    {
        std::cout << "Name: " << 
    }



    return 0;
}