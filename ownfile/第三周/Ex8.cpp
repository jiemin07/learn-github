#include <iostream>
#include <iomanip>
int main() {
 int i, j;
 for (i = 1; i < 10; i++) {
 j = 0;
 while (++j <= 10 - i) {
 std::cout << std::setw(4) << i * j;
 }
 std::cout << std::endl;
 }
 return 0;
}
/*
   1   2   3   4   5   6   7   8   9
   2   4   6   8  10  12  14  16
   3   6   9  12  15  18  21
   4   8  12  16  20  24  
   5  10  15  20  25
   6  12  18  24
   7  14  21 
   8  16
   9       
*/