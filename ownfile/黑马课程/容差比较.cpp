#include <iostream>
#include <cmath>

int main()
{

    double a = 0.1 + 0.2, b = 0.3;
    const double EPSILON = 1e-9;
    if (std::abs(a - b) < EPSILON)
    {
        std::cout << "close enough" << "\n";
    }

    return 0;
}