//Problem Statement: Given an array of N integers, write a program to implement the Recursive Bubble Sort algorithm.

#include<iostream>

using namespace std;

void recursiveBubbleSort(int arr[], int n){
    if (n == 1 ) return;
    for (int i = 0; i < n-1 ; i++)
    {
        if (arr[i] > arr[i+1])
        {
            swap(arr[i] , arr[i+1]);
        }        
    }
    
    recursiveBubbleSort(arr,n-1);
}

int main(){
    int n = 6 ;
    int arr[] = {13,46,24,52,20,9};
    recursiveBubbleSort(arr,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}