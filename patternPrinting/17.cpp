// Write a code to print the following pattern 
//          A
//        A B A
//      A B C B A
//    A B C D C B A 




#include <iostream>
using namespace std;

int main() {
    
    for( int i = 0; i < 4 ; i++){
        // loop for spacing 
        for( int j = 0 ; j < 4 - (i-1); j++){
            
            cout << " " ;
        }
        // loop for pattern 
        for(int k = 0 ; k < (i+1); k++){
            cout << (char)('A' + k) ;
        }
        for (char k = 'A' + i - 1; k >= 'A'; k--) {
            cout << k ;
        }

        cout << endl;
    }
    return 0;
}