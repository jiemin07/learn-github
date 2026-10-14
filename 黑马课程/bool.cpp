#include <iostream>

int main() {
    int a = 10;
    int b = 20;

    // 用 bool 存比较结果
    bool aIsBigger = (a > b);
    bool bIsBigger = (b > a);
    bool isEqual   = (a == b);

    // 根据 bool 的值输出
    if (aIsBigger) {
        std::cout << a << " 大于 " << b << "\n";
    }

    if (bIsBigger) {
        std::cout << b << " 大于 " << a << "\n";
    }

    if (isEqual) {
        std::cout << a << " 等于 " << b << "\n";
    }

    return 0;
}