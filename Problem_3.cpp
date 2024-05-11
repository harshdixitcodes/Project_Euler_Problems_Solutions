// First Approach
#include <iostream>
#include <cmath>  // Include cmath for the sqrt function
#include <corecrt_math.h>
using namespace std;

int main() {
    long long number = 600851475143;
    int largestPrime = 0;  // Variable to store the largest prime factor

    // First, remove all factors of 2
    while (number % 2 == 0) {
        largestPrime = 2;
        number /= 2;
    }

    // Now check for odd factors from 3 upwards
    for (int i = 3; i <= sqrt(number); i += 2) {
        while (number % i == 0) {
            largestPrime = i;
            number /= i;
        }
    }

    // If number is still greater than 2, then it must be prime
    if (number > 2) {
        largestPrime = number;
    }

    cout << "The largest prime factor of the number 600851475143 is: " << largestPrime << endl;

    return 0;
}

// Another approach
/*
#include <iostream>  // Include the IO stream library for input and output operations
using namespace std;

int main() {
    long long number = 600851475143;  // The number to find the prime factor of
    int init = 2;  // Start checking for factors from the smallest prime number

    // Continue dividing the number until it is reduced to 1
    while (number != 1) {
        // Check if 'init' is a factor of 'number'
        if (number % init == 0) {
            number /= init;  // If 'init' is a factor, divide 'number' by 'init'
        } else {
            init++;  // If 'init' is not a factor, increment 'init' to check the next number
        }
    }

    // Once the loop completes, 'init' will hold the largest prime factor
    cout << "The largest prime factor of the number 600851475143 is: " << init << endl;
    
    return 0;  // Return 0 to indicate successful completion
}*/
