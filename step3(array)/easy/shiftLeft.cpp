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

    int n = 7;
    int arr[7] = {4 ,5 ,6 ,7 ,1, 2 ,3 };
    leftRotate(arr,n);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}


