// write a code to print the following pattern 
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      ** 
// ***    ***
// ****  ****
// **********


#include <iostream>
using namespace std;

int main() {
    
    for(int i = 0; i < 6 ; i++){

        // loop to print left pattern
        for(int j=0; j < (5-i); j++){
            cout << "*";
        }
        // loop to print space

        for(int j = 0; j < (i*1); j++){
            cout << " ";
        }
        // loop to print space
        for(int j = 0; j < (i*1); j++){
            cout << " ";
        }

        // loop to print right pattern
        for(int j=0; j < (5-i); j++){
            cout << "*";
        }

        cout << endl;

    }
    for(int i = 0 ; i < 6 ; i++){

        //loop to print left pattern
        for(int j= 1; j < (i+1) ; j++ ){
            cout << "*";
        }

        //loop to print the spacing 
        for(int j = 0; j < (5-i);j++){
            cout << " ";
        }

        //loop to print the spacing 
        for(int j = 0; j < (5-i);j++){
            cout << " ";
        }

        //loop to print the pattern
        for(int j=1; j <(i+1); j++){
            cout << "*";
        }
        cout << endl;
        
        

    }

    return 0;
}