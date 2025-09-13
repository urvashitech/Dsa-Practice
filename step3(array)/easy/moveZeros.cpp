/* Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order. 
    EXAMPLE : [1 ,0 ,2 ,3 ,0 ,4 ,0 ,1] -> [ 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0]
*/


#include<iostream>
using namespace std;

int moveZero(int arr[],int n){
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[temp] = arr[i];
            temp++;
        }
        
    }
    for (int i = temp; i < n; i++)
    {
        arr[i] = 0;
    }

    return 0;
    
}
int main(){

    int n = 7;
    int arr[8] = {1,2,0,1,0,4,0};
    moveZero(arr, n);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}

