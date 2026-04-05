//Problem Statement: Given an unsorted array, find the median of the given array.

#include<bits/stdc++.h>
using namespace std;
float median(vector<int> &arr , int length){
    float median ; 
    for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < length - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
        }
    }
    }

    if (length%2 == 0)
    {
        median = (arr[(length/2)-1] + arr[length/2] )/2.0;
    }
    else if (length % 2 != 0){
        median = arr[length/2];
    }
    return median;
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

    float ans = median(arr,length);
    cout << "Median is : " << ans;
    return 0;
}
