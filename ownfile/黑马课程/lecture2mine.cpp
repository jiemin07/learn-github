#include<iostream>
#include<cmath>

int main()
{
    //1.Print sizeof for at least these six types, each on its own clearly labeled line: bool, char, int, long, long long, double.
    std::cout << "bool:     " << sizeof(bool) << "\n";
    std::cout << "char:     " << sizeof(char) << "\n";
    std::cout << "int:      " << sizeof(int)  << "\n";
    std::cout << "long:     " << sizeof(long) << "\n";
    std::cout << "long long:" << sizeof(long long) << "\n";
    std::cout << "double:   " << sizeof(double) << "\n";


    // 2.Trigger an overflow — on purpose
    unsigned int x = 0;
    --x;
    std::cout << x << "\n";

    unsigned int y = 4294967295;
    ++y;
    std::cout << y << "\n";


    // 3.Compare two doubles — wrong, then right
    // wrong way: if (a == b) ...
    double a = 0.1 + 0.2 , b = 0.3;
    if(a == b){
        std::cout << "equal" << "\n";
    }else{
        std::cout << "not equal" << "\n";
    }
    
    // right way: if (std::abs(a - b) < /* your tolerance */) ...
    if(std::abs(a-b)<1e-10){
        std::cout << "close enough" << "\n";
    }else{
        std::cout << "not close enough" << "\n";
    }

    return 0;
}