//Problem: Print from 1 to N using Recursion

#include<iostream>
using namespace std;

void printingN(int n){
    if(n == 1){
        cout << 1 << endl ; 
        return;
    }
    printingN(n-1);
    cout << n << endl;
}

int main(){
    int n = 5;
    printingN(n);
    return 0;
}