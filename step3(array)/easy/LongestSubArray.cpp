/* Problem Statement: Given an array and a sum k, we need to print the length of the longest subarray that sums to k.
    EXAMPLE : N = 3, k = 5, array[] = {2,3,5} -> 2
*/

#include<iostream>
#include<vector>
using namespace std;

int longestSubArray(int arr[], int k , int N){
    int count = 0;
    int i = 0;
    vector<int> temp;
    while (count < k && i < N)
    {
        count = count + arr[i];
        temp.push_back(arr[i]);
        i++;
    }

    return temp.size();
    
}

int main(){
    int N = 3;
    int k = 5;
    int arr[N] = {2,3,5};
    int len = longestSubArray(arr,k,N);
    cout << "The length of Longest SubArray with sum " << k << "is :" << len << endl;
    return 0;
}