//Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.
#include<bits/stdc++.h>
using namespace std;

vector<int> removeDuplicate(vector<int> &arr) {
    vector<int> result;

    result.push_back(arr[0]);

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - 1])
        {
            result.push_back(arr[i]);
        }
    }

    return result;
}
int main(){
    
    int length;
    cout << "Enter the length of array\n"; 
    cin >> length; 
    cout <<"Enter the Elements\n";

    vector<int> arr(length);
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    removeDuplicate(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    return 0;
}