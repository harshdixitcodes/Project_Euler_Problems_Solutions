#include <iostream>

// Function to calculate the greatest common divisor (GCD) using Euclid's algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate least common multiple (LCM) using the relation lcm(a, b) * gcd(a, b) = a * b
int lcm(int a, int b) {
    return a / gcd(a, b) * b;  // Use integer division first to prevent overflow
}

int main() {
    int result = 1;
    for (int i = 1; i <= 20; ++i) {
        result = lcm(result, i);
    }
    std::cout << "The smallest number evenly divisible by all numbers from 1 to 20 is: " << result << std::endl;
    return 0;
}
