// Write a code to print the following pattern
// 1      1
// 12    21
// 123  321
// 12344321

#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= i+1 ; j++)
        {
            cout << j ;
        }

        for (int j = 1; j < (6 - 2 * i); j++)
        {
            cout << " ";
        }

        for (int k = i+1; k >= 1 ; k-- ){
            cout << k ;
        }
        cout << endl;
        

        
        
    }
    
}
