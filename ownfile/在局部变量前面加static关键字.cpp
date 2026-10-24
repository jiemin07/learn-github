#include <iostream>

// 1. 带有 static 的函数
void track_calls_with_static() {
    static int calls = 0; // 关键点：只初始化一次！
    ++calls;
    std::cout << "WITH static:    called " << calls << " times\n";
}

// 2. 没有 static 的函数
void track_calls_without_static() {
    int calls = 0;        // 每次调用都会重新创建并初始化为 0
    ++calls;
    std::cout << "WITHOUT static: called " << calls << " times\n";
}

int main() {
    std::cout << "--- 连续调用带有 static 的函数 3 次 ---\n";
    track_calls_with_static();
    track_calls_with_static();
    track_calls_with_static();

    std::cout << "\n--- 连续调用没有 static 的函数 3 次 ---\n";
    track_calls_without_static();
    track_calls_without_static();
    track_calls_without_static();

    return 0;
}