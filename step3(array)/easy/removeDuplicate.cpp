/*Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

Note: Return k after placing the final result in the first k slots of the array.*/

#include<iostream>
using namespace std;

int removeDuplicate(int arr[] , int n){
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] == arr[i+1])
        {
            for (int j = i; j < n-1; j++)
            {
                arr[j] = arr[j+1];
            }
            
            n--;
            i--;
            
        }
        
    }
    cout << "Number Of Unique Elements is : " << n << endl;
    return n;
    
}
int main(){

    int arr[11] = {1,1,1,2,2,3,3,3,3,4,4};
    int n = 11;

    int k = removeDuplicate(arr, n);

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < k; i++) {
    cout << arr[i] << " ";
   
    }
}
