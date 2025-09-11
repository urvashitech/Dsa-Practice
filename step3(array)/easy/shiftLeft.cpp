/* Problem Statement: Given an array of N integers, left rotate the array by one place. */

#include<iostream>

using namespace std;

int leftRotate(int arr[], int n){

    int first = arr[0];

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i+1];
    }

    arr[n-1] = first;
    
    return 0;
    
}


int main(){

    int n = 5;
    int arr[5] = {1,2,3,4,5};
    leftRotate(arr,n);
    
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}

