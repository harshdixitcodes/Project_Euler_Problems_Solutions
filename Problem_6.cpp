#include<iostream>
using namespace std;

int main(){
    int n = 100;
    // Calculate the sum of the first 100 natural numbers using the formula
    long sum = n * (n + 1) / 2;

    // Calculate the sum of the squares of the first 100 natural numbers using the formula
    long sumOfSquares = n * (n + 1) * (2 * n + 1) / 6;

    // Calculate the difference between the square of the sum and the sum of the squares
    long difference = sum * sum - sumOfSquares;

    // Print the result to the console
    cout << "The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is: " << difference << endl;

    return 0;
}
/*
#include<iostream>
using namespace std;

int main(){
    long sum = 0, sumOfSquares = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum = sum + i;
        sumOfSquares = sumOfSquares + i * i;
    }
    
    cout << "The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is: " << sum * sum - sumOfSquares << endl;
    return 0;
} */