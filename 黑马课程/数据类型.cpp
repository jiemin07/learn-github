#include<iostream>
using namespace std;
//数据类型存在意义：给变量分配一个合适的内存空间
//做整数：short   int   long   long long(占用内存空间不同，导致取值范围不同)（mac8字节，long和long long占内存一样）

//main是程序的入口，操作系统调用
int main(){
short num1=1;
int num2=2;
long num3=3;
long long num4=4;
cout<<num1<<endl;
cin.get();
return 0;

//可以利用sizeof求出数据类型占用内存大小
//语法：sizeof(数据类型/变量)

}