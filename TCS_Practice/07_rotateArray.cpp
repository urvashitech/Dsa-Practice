//Problem Statement: Given an array of n size, rotate the array by k elements using the Block Swap Algorithm.
#include<bits/stdc++.h>
using namespace std;


void rotate(vector<int>&arr,int length , int k ){
    k = k%length;
    for (int i = 0; i < k; i++)
    {
        int temp;
        temp = arr[0];
        for (int j = 0; j < length-1; j++)
        {
             arr[j] = arr[j+1] ;
        }

        arr[length-1] = temp;
        
    }
    
}
int main(){
    int length;
    int k;
    cout << "Enter the length of array\n"; 
    cin >> length;
    cout << "Enter the value of k\n";
    cin >> k;
    cout <<"Enter the Elements\n";

    vector<int> arr(length);
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    rotate(arr,length,k);
    for (int p = 0; p < length; p++)
    {
        cout << arr[p] ;
    }
    
    return 0;
}
