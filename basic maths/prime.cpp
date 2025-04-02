//Problem Statement: Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.

#include<iostream>
using namespace std;

bool isPrime(int N){
    int count = 0;
    for(int i = 1; i<=N ; i++){
        if(N % i == 0){
            count +=1;
        }
    }

    return count == 2 ? true :false;
}

int main(){
    int N = 4 ;
    bool primeOrNot = isPrime(N);

    
    cout << "The given number " << N << " is " << (primeOrNot  ? "Prime" : " Not prime")  << endl;

    return 0;
}