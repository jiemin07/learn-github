#include<iostream>
using namespace std;

int main()
{
    int number = 100;
    int a,b,c;
    
    while(number<1000)
    {
        a = number/100;
        b = number/10%10;
        c = number%10;
         if(a*a*a+b*b*b+c*c*c == number)
        { 
            cout << number <<endl;
        }
        number++;
    }
}// namespace std