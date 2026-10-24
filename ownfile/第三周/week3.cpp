#include <iostream>

int main()
{
   int score = 0;
while (!(std::cin >> score) || score < 0 || score > 100) {
    std::cin.clear();
    std::cin.ignore(1000, '\n');
    std::cout << "Invalid. Try again: ";
}
return 0;
}