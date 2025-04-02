//Problem Statement: Given an integer N, return all divisors of N.

#include<iostream>
#include<vector>
using namespace std;

vector<int> primeDivisor(int N) {
    vector<int> number;

    for(int i = 1; i <= N; i++) {  
        if (N % i == 0) {          
            number.push_back(i);
        }
    }

    return number;
}

int main() {
    int N = 24;
    cout << "The divisors of " << N << " are:" << endl;

    vector<int> divisors = primeDivisor(N);
    for(auto val : divisors) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
