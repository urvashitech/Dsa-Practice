//Problem Statement: Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.

#include<iostream>

using namespace std;

bool isSorted(int arr[] , int n){
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            return false;
        }
        
    }

    return true;
    
}

int main(){
    int arr[5] = {5,4,6,7,8};
    int n = 5;
    bool result = isSorted(arr,n);
    if (result == true)
    {
        cout << "True";
    }
    else{
        cout << "False" ; 
    }

}