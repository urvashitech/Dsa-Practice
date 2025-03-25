// Write a code to print the following pattern 
// 1
// 22
// 333
// 4444
// 55555

#include<iostream>
using namespace std;

int main(){

    for (int i = 0; i < 5 ; i++)
    {
        for ( int j = 0 ; j < i+1; j++)
        {
            cout << (i+1);
        }
        cout << endl;
        
    }
    
    return 0;

}