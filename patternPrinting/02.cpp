// Write a code to print this pattern
// 1
// 12
// 123
// 1234
// 12345

#include <iostream>
using namespace std;

int main(){

    for(int i = 1; i < 6 ; i++ ){

        for(int j = 1 ; j < i+1 ; j++){
            cout << j ;
        }
        cout << endl ;
    }
    return 0;
}