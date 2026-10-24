#include <iostream>
using namespace std;

int main() {
    // 1. 定义常量：规定二维数组的行数和列数（方便后续统一修改）
    const int ROW_SIZE = 3;       // 3行
    const int COLUMN_SIZE = 4;    // 4列

    // 2. 声明二维数组
    int matrix[ROW_SIZE][COLUMN_SIZE];

    // 3. 提示用户输入（和书上的提示语一致）
    cout << "Enter " << ROW_SIZE << " rows and " 
         << COLUMN_SIZE << " columns: " << endl;

    // 4. 核心循环：读取用户输入并赋值给数组（就是你图片里的第一段代码）
    for (int i = 0; i < ROW_SIZE; i++) {
        for (int j = 0; j < COLUMN_SIZE; j++) {
            cin >> matrix[i][j];
        }
    }

    // ================= 以下为额外演示 =================
    // 5. 核心循环：打印二维数组（对应图片里的第三段代码），方便你验证输入结果
    cout << "\nYou entered the following matrix:" << endl;
    for (int row = 0; row < ROW_SIZE; row++) {
        for (int column = 0; column < COLUMN_SIZE; column++) {
            cout << matrix[row][column] << " ";
        }
        cout << endl; // 每一行打完，记得换行
    }

    return 0;
}