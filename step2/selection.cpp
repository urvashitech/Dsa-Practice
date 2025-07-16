//Problem Statement: Given an array of N integers, write a program to implement the Selection sorting algorithm.

#include<iostream>
using namespace std;
 

void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1 ; i++)
    {
        int smallInx = i;
        for (int j = i+1 ; j < n ; j++)
        {
           if(arr[j] < arr[smallInx])
           {
                smallInx = j;
           }
           
        }
        swap(arr[i],arr[smallInx]);
        
    }
    
}
int main(){
   int n = 6;
   int arr[] = {13,46,24,52,20,9};
   selectionSort(arr,n);
   for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
   return 0;
}