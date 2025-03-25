// Write a code to print the following pattern
// 12345 
// 1234
// 123
// 12
// 1

#include <iostream>
using namespace std;

int main(){

    for( int i = 0 ; i < 6 ; i++ ){
        for( int j = 1 ; j < 6-i ; j++){
            cout << j ;
        }
        cout << endl;
    }
    return 0;
}
