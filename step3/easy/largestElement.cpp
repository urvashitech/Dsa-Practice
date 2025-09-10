//Given an array of integers nums, return the value of the largest element in the array


#include<iostream>

using namespace std;

int largestElement(int arr[],int n){
    int maxVal = arr[0];
    for (int i = 0; i < n; i++)
    {
        
        if (maxVal < arr[i])
        {
            maxVal = arr[i];
        }
        
    }
    return maxVal;
    
}

int main(){

    int n = 5;
    int arr[5] = {3, 3, 0, 99, -40};
    int element = largestElement(arr,n);
    cout << element << " ";
    return 0 ;

}