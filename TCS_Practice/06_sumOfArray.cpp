//Problem Statement: Given an array arr of size n, the task is to find the sum of all the elements in the array .

#include<bits/stdc++.h>
using namespace std;


int Sum(vector<int> &arr , int length){
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main(){

    int length; 
    cout << "Enter the length of array";
    cin >> length;
    vector<int> arr(length);

    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    
    int sum = Sum(arr,length);
    cout << "Sum of element of array is : " << sum ;
    return 0 ;
}