//Given an array of size n, sort the array using Merge Sort.

/* Problem Statement: Given an array of N integers, write a program to implement the Bubble Sorting algorithm. */

#include<iostream>
#include<vector>
using namespace std;


void merge(vector<int> &arr , int st, int mid, int end){
  vector<int> temp;
  int i= st , j = mid+1;
  while(i<=mid && j <=end){
    if (arr[i] <= arr[j])
    {
        temp.push_back(arr[i]);
        i++;
    }
    else{
        temp.push_back(arr[j]);
        j++;
    }
    while (i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while (j<=end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int i = 0; i < temp.size(); i++)
    {
        arr[i+st] = temp[i];
    }
    
    
    
  }


}
void mergeSort(vector<int> &arr,int st,int end){
    if(st < end){
        int mid = st + (end-st)/2;

        mergeSort(arr,st,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,st,mid,end);
    }
}

int main(){
    int n = 6 ;
    int arr[] = {13,46,24,52,20,9};
   
    return 0;
}