#include<iostream>
#include<string>

int main()
{
    std::string names[3]={"张三：","李四：","王五："};
    int scores[3][3]={
        {100,100,100},
        {90,50,100},
        {60,70,80}
    };

    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum += scores[i][j];
        }
        std::cout<< names[i] <<sum <<std::endl;
    }





}