//Problem Statement: Given an integer N, return true it is an Armstrong number otherwise return false.

#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int N) {
    int originalN = N; 
    int count = 0;
    int sum = 0;

    
    int temp = N;
    while (temp > 0) {
        count++;
        temp /= 10;
    }
    temp = N;  
    while (temp > 0) {
        int lastDigit = temp % 10;
        sum += pow(lastDigit, count);
        temp /= 10;
    }

    return sum == originalN;
}


int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    if (isArmstrong(N))
        cout << N << " is an Armstrong number." << endl;
    else
        cout << N << " is not an Armstrong number." << endl;

    return 0;
}