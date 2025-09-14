/* Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N),       that is not present in the given array.
    EXAMPLE :  {1,2,4,5} n = 5  -> missing element : 3  
*/



#include<iostream>
using namespace std;

int missingElement(int arr[], int n) {
    int totalSum = n * (n+1) / 2;
    int arrSum = 0;
    for (int i = 0; i < n ; i++)
    {
        arrSum = arrSum + arr[i];
    }


    return totalSum-arrSum;
    
    
}

int main(){
    int n = 3;
    int arr[n-1] = {3,0,1} ;
    int missingNumber = missingElement(arr,n);
    cout << missingNumber << endl;
    return 0;

}

