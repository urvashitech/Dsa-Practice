//Problem Statement: Given an array, we have found the number of occurrences of each element in the array.

#include<bits/stdc++.h>
using namespace std;


int frequency(vector<int> &arr, int length , int element){

    int frequncy = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == element)
        {
            frequncy+= 1;
        }
        
    }
    
    return frequncy;

}
int main(){

    int element;
    int length;
    
    cout << "Enter the length of array\t";
    cin >> length;
    vector<int> arr(length);
    
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    cout << "\n Enter the element" ; 
    cin >> element;

    int ans = frequency(arr, length , element);
    cout << "frequency of the element is " << ans ;
    

    return 0 ; 
}