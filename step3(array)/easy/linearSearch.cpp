/* Problem Statement: Given an array, and an element num the task is to find if num is present in the given array or not. If present print the index of the element or print -1. 
    EXAMPLE : [1 ,2 ,3 ,4 ,5]   num = 3 -> index 2
*/


#include<iostream>
using namespace std;


int linearSearch(int arr[] , int num , int n){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
        
    }

    return -1;
    
}

int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int index = linearSearch(arr,3,n);

    cout <<  " Index of the number is : "<< index << endl;


}

