//Problem Statement: Given an array, we have to find the largest element in the array.
#include<bits/stdc++.h>
using namespace std;

int SecondlargestElement(vector<int> &arr, int n){
    int max1 = arr[0];
    int max2 = -1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
            
        }
        else if( arr[i] < max1 && arr[i] > max2){
            max2 = arr[i];
        }
    }

    return max2;
}

int SecondsmallestElement(vector<int> &arr , int n){
    int min1 = arr[0];
    int min2 = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
            

        }
        else if (arr[i] > min1 && arr[i] < min2){
            min2 = arr[i];
        }
        
    }
    return min2;
}
int main(){
    int n;
    cout << "Enter the length of array\t";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }   
    int ans = SecondlargestElement(arr,n);
    int ans1 = SecondsmallestElement(arr,n);
    cout << "Maximum element";
    cout << ans << "\n";
    cout << "Minimum Element";
    cout << ans1;
    return 0;
}