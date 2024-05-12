// Brute Force
#include <iostream>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int n) {
    int reversed = 0, original = n, remainder;
    while (n != 0) {
        remainder = n % 10;  // Get the last digit
        reversed = reversed * 10 + remainder;  // Rebuild the number in reverse
        n /= 10;  // Remove the last digit
    }
    return original == reversed;  // Check if the number reads the same forwards and backwards
}

int main() {
    int largestPalindrome = 0;
    
    // Iterate over all pairs of three-digit numbers
    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {  // Start j from i to avoid redundant checks (i * j is the same as j * i)
            int product = i * j;
            if (product < largestPalindrome)
                break;  // No need to proceed if the product is smaller than the largest found so far
            if (isPalindrome(product)) {
                largestPalindrome = product;  // Update largest palindrome if a new one is found
            }
        }
    }

    cout << "The largest palindrome made from the product of two 3-digit numbers is: " << largestPalindrome << endl;
    return 0;
}

//By Generating Palindrome on your own
/*
#include <iostream>
using namespace std;

// Function to check if the palindrome can be expressed as the product of two 3-digit numbers
bool has3DigitFactors(int palindrome) {
    for (int i = 999; i >= 100; i--) {
        if (palindrome % i == 0) {  // Check if 'i' is a factor
            int j = palindrome / i;
            if (j >= 100 && j <= 999) {  // Check if the quotient is a three-digit number
                return true;
            }
        }
    }
    return false;
}

// Function to find the largest palindrome product
int findLargestPalindromeProduct() {
    for (int i = 999; i >= 100; i--) {
        int high = i, low = 0, temp = i;
        // Create a mirrored version of the number
        while (temp > 0) {
            low = low * 10 + (temp % 10);
            temp /= 10;
        }
        int palindrome = high * 1000 + low;  // Concatenate the high and low parts to form the palindrome
        if (has3DigitFactors(palindrome)) {
            return palindrome;
        }
    }
    return -1;  // If no palindrome found that can be factored into two 3-digit numbers
}

int main() {
    int largestPalindrome = findLargestPalindromeProduct();
    cout << "The largest palindrome made from the product of two 3-digit numbers is: " << largestPalindrome << endl;
    return 0;
}
*/