// Problem Statement : Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder).  Return the total number of such digits.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int countDivisors(int N){
    int count = 0;
    vector<int> val;
    int originalN = N;
    while (N >0)
    {
        int lastDigit = N % 10;
        val.push_back(lastDigit);
        N = N / 10 ;
    }

    reverse(val.begin(),val.end());
    
    for(auto ans:val){
        if(ans != 0 && originalN % ans == 0){
           count +=1;
        }
    }

    return count;
}

int main(){
    int N = 23;
    cout << "N: " << N << endl;
    int digits = countDivisors(N);
    cout << "The number of numbers that divide " << N << " completely are " << digits << endl;
}