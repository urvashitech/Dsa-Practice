//Problem Statement: Given an integer N, return true if it is a palindrome else return false.

#include<iostream>
using namespace std;

int isPalindrome(int N){
    int originalN = N;
    int reverse = 0;

    while(N > 0){

        int lastDigit = N % 10;
        reverse = reverse * 10 + lastDigit;
        N /= 10;
    }

    return originalN == reverse ? true : false;
}

int main(){
    int N = 7789;
    cout << "The given number is : "<< N << endl;
    int digit = isPalindrome(N);
    cout << digit ; 

    return 0;
}