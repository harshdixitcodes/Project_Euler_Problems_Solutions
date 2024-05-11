#include<iostream>
using namespace std;
int main(){
    int j = 0;

    for (int i = 0; i < 1000; i++)
    {
        
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            j += i;
        }
        
    }

    cout << "The sum of multiple of 3 or 5 below 1000 is: " << j << endl;

}