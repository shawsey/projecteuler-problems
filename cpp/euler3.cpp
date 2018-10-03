//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

// Process of elimination, divide by 2, add 2 to primes

#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    unsigned int num; 
    cout << "Number to find primes : ";
    cin >> num;
    
    // Gets first prime of 2 until not possible, then moves to odds
    while (num % 2 == 0){
        num = num / 2;
        cout << 2 << endl;
        
    }
    // i + 2 to skip all unnec evens as we test
    for (int i = 3; i <= sqrt(num); i = i + 2){
        
        while(num % i == 0){
            cout << i << endl;
            num = num / i;
        }
    }
     
    if (num > 2){
        cout << num << endl;
    }
    
    return 0;
}
