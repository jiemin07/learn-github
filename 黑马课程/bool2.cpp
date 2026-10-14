#include<iostream>

int main()
{
    bool b = 0;
    bool c = 1;
    bool d = 2;

    std::cout << std::boolalpha << b << "\n" << c << "\n" << d << std::endl;

    return 0;
    /*打印输出（注意！）：
     如果你直接 cout << isRaining;，屏幕上不会打印出 "true" 这个单词，而是会打印出 1。
     如果你想打印出单词，需要加上 std::boolalpha：

     std::cout << std::boolalpha << isRaining << std::endl; // 输出: true
     std::cout << isRaining << std::endl;                   // 输出: 1

     最容易犯的语法错误（敲黑板！）：
     true 和 false 必须全小写。写 True 或 TRUE 编译器会报错。
     不要加引号！bool a = "true"; 是错的。加引号就变成字符串（文本）了。*/
}