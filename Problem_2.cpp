#include<iostream>
using namespace std;

int main() {
    unsigned long sum = 0;     // Initialize sum to store the sum of even Fibonacci numbers
    unsigned long a = 1;       // First Fibonacci number
    unsigned long b = 1;       // Second Fibonacci number
    unsigned long c = a + b;   // Third Fibonacci number, which will be even initially

    // Loop until the Fibonacci number exceeds 4 million
    while (c <= 4000000) {
        sum += c;              // Add the even Fibonacci number to sum

        a = b + c;             // Move to the next Fibonacci number
        b = c + a;             // Move to the one after that
        c = a + b;             // This is the next even Fibonacci number (every third Fibonacci number)
    }

    // Output the result to the console
    cout << "The sum of even-valued terms in the Fibonacci sequence not exceeding 4 million is: " << sum << endl;

    return 0;  // Return 0 to indicate successful completion
}
