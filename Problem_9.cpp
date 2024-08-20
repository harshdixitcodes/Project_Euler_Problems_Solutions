#include<iostream>
using namespace std;

int findPythagoreamTriplet(int sum_total){
    for (int i = 1; i < sum_total; ++i){
        for (int j = i + 1; j < sum_total - i; ++j){
            int c = sum_total - i - j;
            if(i * i + j * j == c * c){
                cout << "The number a is: " << i << endl;
                cout << "The number b is: " << j << endl;
                cout << "The number c is: " << c << endl;
                return i * j * c;
            }
        }   
    } 
    return -1;  
}
int main(){
    int sum_total = 1000;
    int result = findPythagoreamTriplet(sum_total);
    if (result != -1){
        cout << "The problem abc is: " << result << endl;
    }
    else{
        cout << "NO SUCH PAIR OF THREE NUMBERS FOUND!!" << endl;
    }
    return 0;
}