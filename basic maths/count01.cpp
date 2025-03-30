// Problem Statement: Given an integer N, return the number of digits in N.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> count(int n){
    vector<int> val;
    while (n>0)
    {
       int lastDigit =  n%10;
       val.push_back(lastDigit);
       n = n/10;
    }
    reverse(val.begin(), val.end());

    return val;
}

int main() {
    int N = 329823;
    cout << "N: "<< N << endl;
    vector<int> digits = count(N);
    cout << "Extracted Digits: ";
    for(auto num: digits){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}