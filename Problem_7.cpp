#include <iostream>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) return false;
    if (number <= 3) return true;
    if (number % 2 == 0 || number % 3 == 0) return false;
    for (int i = 5; i <= sqrt(number); i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int count = 0; // Number of primes found
    int num = 2;   // Number to check for primality

    while (count < 10001) {
        if (isPrime(num)) {
            count++;  // Increment the count if num is prime
        }
        num++;      // Move to the next number
    }

    // The loop exits when we've found the 10001st prime, but num was incremented at the end of the loop, so we subtract 1
    std::cout << "The 10,001st prime number is: " << num - 1 << std::endl;

    return 0;
}
