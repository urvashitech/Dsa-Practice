/* Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.

The union of two arrays can be defined as the common and distinct elements in the two arrays.NOTE: Elements in the union should be in ascending order. */

#include<iostream>
#include<vector>

using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n , int m){
    vector<int> unionVector;

    int p = 0;
    int q = 0;
    int r = 0;
    while (p < n && q < m)
    {
        if(arr1[p] <= arr2[q]){
            if(unionVector.empty() || unionVector.back() != arr1[p]){
                unionVector.push_back(arr1[p]);

            }
            p++;
        }
        else{
            if (unionVector.empty() || unionVector.back() != arr2[q])
            {
                unionVector.push_back(arr2[q]);
            }
            q++;
        }
        
        
    }
    while (p < n)
    {
        if(unionVector.back() != arr1[p]){
                unionVector.push_back(arr1[p]);

            }
            p++;
    }
    while (q < n)
    {
        if (unionVector.back() != arr2[q])
            {
                unionVector.push_back(arr2[q]);
            }
            q++;
    }
    return unionVector;
}
int main() {
    int arr1[] = {1, 2, 2, 3, 5};
    int arr2[] = {2, 3, 4, 5, 6};
    int n = 5, m = 5;

    vector<int> result = findUnion(arr1, arr2, n, m);

    cout << "Union of arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
