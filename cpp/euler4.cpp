//A palindromic number reads the same both ways. 
//The largest palindrome made from the product of
// two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std; 

int main(){
    
    int x = 100;
    int y = 100;
    int largestpaly = 0;
    do{
        // Multiply all x and y values with three digits
        int p = x * y;
        cout << p << endl;
        // determine length of value so that it can be cut and compared
        int num = p;
        int rev, digit = 0;
        
        do { digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
        } while (num != 0);
     
        cout << " The reverse of the number is: " << rev << endl;
        if (p == rev) {
            largestpaly = p;
            cout << "PALY " << endl;
        }
        else {
            cout << "Not a palindrome" << endl;
        }
        x++;
        y++;
        
    }while(y < 999 && x < 999);
    
    cout << largestpaly << endl;
    
    return 0;
}
