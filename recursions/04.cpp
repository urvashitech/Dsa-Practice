//Problem statement: Given a number ‘N’, find out the sum of the first N natural numbers.

#include<iostream>
using namespace std;


int  SumN(int n){

    if (n == 1 ){
        return 1; 
    }
    return  n + SumN(n-1);

}

int main(){
    int n = 5;
    cout << SumN(n) << endl;
    return 0;
}