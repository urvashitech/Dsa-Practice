// Write a code to print the following pattern
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5 ; i++){

        int check = (i%2 == 0) ? 1 : 0;
        for(int j = 0 ; j <=(i) ; j++){

            cout << check << " ";
            check = 1 - check; 
        }
        cout << endl;
    }
    return 0 ;
}