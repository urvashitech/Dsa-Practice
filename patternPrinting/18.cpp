// Write a code to print the following pattern 
// E 
// D E 
// C D E
// B C D E 
// A B C D E 
#include <iostream>
using namespace std;

int main() {
    
    for(char i = 'E' ; i >='A'; i--){
        for (char k = i; k <= 'E'; k++) {
            cout << k ;
        }
        cout << endl ;
    }
    return 0;
}