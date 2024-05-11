// First Approach
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

// Another Possible Approach
/*
#include<iostream>  // Include the IO stream library for input and output operations

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard library entities

int main(){
    unsigned long sum = 0;  // Initialize 'j' to store the sum of even Fibonacci numbers
    unsigned long temp;   // Temporary variable to hold the previous Fibonacci number during swap
    unsigned long i = 1;  // Start the first Fibonacci number
    unsigned long prev = 1;  // Initialize 'prev' to the zeroth Fibonacci number, which is technically 1 here

    // Loop until the Fibonacci number exceeds 4 million
    while (i <= 4000000)
    {
        temp = i;  // Store the current Fibonacci number in 'temp'
        i = i + prev;  // Generate the next Fibonacci number
        prev = temp;  // Update 'prev' to the former current Fibonacci number

        // Check if the new Fibonacci number is even
        if (i % 2 == 0)
        {
            j += i;  // Add it to 'j' if it is even
        }
        
    }

    // Output the result to the console
    cout << "The sum of even-valued terms in the Fibonacci sequence not exceeding 4 million is: " << j << endl;

    return 0;  // Return 0 to indicate successful completion
}
*/
