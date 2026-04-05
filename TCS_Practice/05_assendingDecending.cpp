//Problem Statement: Rearrange a given array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order

#include<bits/stdc++.h>
using namespace std;

void aasendingDecending(vector<int> &arr , int length){
    for (int i = 0; i < length - 1; i++) {
    for (int j = 0; j < length - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
        }
    }
    } 
    int start = length / 2;
    int end = length - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}
int main(){

    int length;
    cout << "Enter the length of the array\t " ;
    cin >> length;

    vector<int> arr(length);
    for(int i = 0; i<length; i++){
        cin >> arr[i];
    }
    aasendingDecending(arr,length);
    for (int p = 0; p < length; p++)
    {
        cout << arr[p] << "\n" ;
    }
    

    return 0 ; 
}