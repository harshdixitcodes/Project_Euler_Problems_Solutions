#include<iostream>  // Include the IO stream library for input and output operations

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard library entities

int main(){
    int j = 0;  // Initialize a variable 'j' to store the sum of multiples

    // Loop from 0 to 999
    for (int i = 0; i < 1000; i++)
    {
        // Check if 'i' is a multiple of 3 or 5
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            j += i;  // Add 'i' to 'j' if it is a multiple of 3 or 5
        }
    }

    // Output the result to the console
    cout << "The sum of multiples of 3 or 5 below 1000 is: " << j << endl;

    return 0;  // Return 0 to indicate successful completion
}
