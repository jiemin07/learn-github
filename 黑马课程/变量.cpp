#include<iostream>
using namespace std;

// ============ 1、宏常量：#define ============
// 语法：#define  名字  替换成什么
// 注意：这不是赋值，不能写 = ，也不能写 ;
#define Day 7

int main(){
    cout<<"一周共有："<<Day<<"天"<<endl;

    // Day = 8;   // ❌ 报错：宏常量不能修改（替换后变成 "7 = 8"）

    // ============ 2、const 修饰的常量 ============
    const int month = 12;
    cout<<"一年共有："<<month<<"个月份"<<endl;

    // month = 24; // ❌ 报错：const 常量同样不能修改

    return 0;
}
