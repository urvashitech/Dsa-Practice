/* Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
    EXAMPLE :  [1,2,3,4,5,6,7]  ->    [5,6,7,1,2,3,4]

*/
#include<iostream>
using namespace std;

int rotate(int arr[], int k , int n){
    k= k%n ;
    int result[k];
    for (int i = 0; i < k; i++)
    {
        result[i] = arr[n-k+i];
    }
    for (int i = n-1; i >= k; i--)
    {
        arr[i] = arr[i-k];
    }

    for (int i = 0; i < k; i++) {
        arr[i] = result[i];
    }
    return 0;
}
int main(){

    int n = 7;
    int arr[7] = {1,2,3,4,5,6,7};
    rotate(arr, 3 , n);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}


