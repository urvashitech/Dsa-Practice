//Problem Statement: Given an array, we have to find the smallest element in the array.

#include<bits/stdc++.h>
using namespace std;


int smallestElement(vector<int> &arr, int n){
    int s = arr[0];
    for (int i = 1; i < n; i++)
    {
        
        if (arr[i] < s)
        {
            s = arr[i];
        }
        
    }
    return s;
    
}
int main(){
    int n;
    cout <<  "Enter Array Length\t" ;
    cin >> n; 

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int ans = smallestElement(arr,n);
    cout << ans;
    return 0;
}
