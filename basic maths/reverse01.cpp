//Problem Statement: Given an integer N return the reverse of the given number.

#include<iostream>

using namespace std;

int reverse(int N){

    int reverse = 0;
    while (N > 0){
        int lastDigit = N % 10 ;
        reverse = reverse * 10 + lastDigit;
        N = N / 10 ; 

    }
    return reverse;
}

int main(){
    int N = 10400;
    cout << "The number is : " << N << endl;
    int reversedNumber = reverse(N);
    cout << "The reverse of "<< N << " is : "<< reversedNumber << endl;


    return 0 ;
}