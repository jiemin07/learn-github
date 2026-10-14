#include<iostream>
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int number = rand()%100 + 1;
    
    while(1)
    {
    int val;
    cin >> val;
    if(val>number)
        cout << "猜测过大" << endl;
    else if (val<number)
    {
        cout << "猜测过小" << endl;
    }
    else
    {
        cout << "恭喜您猜对了！" << endl;
        break;
    }
}
   return 0;
} // namespace std

