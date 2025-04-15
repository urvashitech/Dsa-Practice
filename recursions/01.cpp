//Problem: Print your Name N times using recursion

#include<iostream>
using namespace std;

void printName(int i, int n){
    if(i > n){
        return;
    }
    cout << "Urvashi" << endl ;
    printName(i+1, n);
}


int main(){
    int n = 4;
    printName(1,n);
    return 0;
}