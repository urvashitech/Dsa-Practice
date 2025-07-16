/* Problem Statement: Given an array of N integers, write a program to implement the Bubble Sorting algorithm. */

#include<iostream>
using namespace std;

void bubbleSort(int arr[] ,int n ){

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0 ; j < n-i-1 ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
            }
            
        }
        
    }
    
}

int main(){
    int n = 6 ;
    int arr[] = {13,46,24,52,20,9};
    bubbleSort(arr,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}