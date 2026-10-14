#include <iostream>
#include <cmath>

int main() 
{ 
    // Task 1 — Print type sizes
    std::cout << "=== Task 1: Type sizes ===\n";
    std::cout << "bool:      " << sizeof(bool)      << " byte(s)\n";
    std::cout << "char:      " << sizeof(char)      << " byte(s)\n";
    std::cout << "int:       " << sizeof(int)       << " byte(s)\n";
    std::cout << "long:      " << sizeof(long)      << " byte(s)\n";
    std::cout << "long long: " << sizeof(long long) << " byte(s)\n";
    std::cout << "double:    " << sizeof(double)    << " byte(s)\n";
    std::cout << "\n";

    // Task 2 — Trigger an overflow on purpose
    std::cout << "=== Task 2: Unsigned overflow ===\n";
    unsigned int x = 0;
    --x;                       // decrement past zero
    std::cout << "x after --x (0 - 1): " << x << "\n";
    // explanation: unsigned integers wrap around modulo 2^32, so subtracting 1
    // from 0 goes below the minimum and wraps to the largest representable
    // value, 4294967295 (UINT_MAX), because there is no room for negative numbers.

    unsigned int y = 4294967295u;   // UINT_MAX on a 32-bit unsigned int
    ++y;                            // increment past maximum
    std::cout << "y after ++y (UINT_MAX + 1): " << y << "\n";
    // explanation: adding 1 to the maximum unsigned value overflows the 32 bits
    // and wraps back around to 0, because unsigned arithmetic is modular and
    // cannot represent 2^32.
    std::cout << "\n";

    // Task 3 — Compare two doubles: wrong, then right
    std::cout << "=== Task 3: Double comparison ===\n";
    double a = 0.1 + 0.2;
    double b = 0.3;

    // Wrong way: exact equality
    if (a == b) {
        std::cout << "Wrong way (a == b): equal\n";
    } else {
        std::cout << "Wrong way (a == b): NOT equal\n";
    }

    // Right way: compare with a small tolerance using std::abs
    const double tolerance = 1e-9;
    if (std::abs(a - b) < tolerance) {
        std::cout << "Right way (|a - b| < 1e-9): close enough\n";
    } else {
        std::cout << "Right way (|a - b| < 1e-9): not close enough\n";
    }

    std::cout.precision(17);
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "a - b = " << (a - b) << "\n";

    return 0;
}