//Problem: Print from N to 1 using Recursion
#include<iostream>
using namespace std;


void printingN(int n){
    if(n == 1){
        cout << 1 << endl ; 
        return;
    }

    cout << n << endl;
    printingN(n-1);
}


int main(){
    int n = 5;
    printingN(n);
    return 0;
}