// Project Euler Archive, Multiples of 3 and 5 
// Find the sum of all the multiples of 3 or 5 below 1000.

#include <cmath>
#include <iostream>
using namespace std;

int main(){
    
    int t;
    
    int total = 0;
    // For range(1, 1000) check each if they have a remainder when divided by 3,5.
    for (t=1; t < 1000; t = t + 1){
        int a = 3;
        int b = 5; 
        if (t % a == 0){
            cout << t << endl;
            total = total + t;
        }
        else {
            if (t % b == 0){
                cout << t << endl;
                total = total + t;
            }
        }
        }
    cout << "The total sum of multiples are : " << total << endl;
    return 0;
}
