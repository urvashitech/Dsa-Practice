//Problem Statement : Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

#include<iostream>
using namespace std;

int reverse(int N){
    int reverseDigit = 0 ;
    bool isNagative = (N < 0);
    N = abs(N);

    while(N > 0){
        int lastDigit = N % 10 ; 
        reverseDigit = reverseDigit * 10 + lastDigit;
        N = N/10; 
    }

    return isNagative? -reverseDigit : reverseDigit ;     
}

int main(){
    int N = 123;
    cout << "The number is : " << N << endl;
    int reversedNumber = reverse(N);
    cout << "The reverse of "<< N << " is : "<< reversedNumber << endl;


    return 0 ;
}
