//Find Second Smallest and Second Largest Element in an array

#include<iostream>

using namespace std;

int secondLargestElement(int arr[],int n){
    if(n<2){
        return arr[0];
    }
    int maxVal = arr[0];
    int secondMaxVal = arr[1];
    
    if(arr[0] > arr[1]){
        maxVal = arr[0];
        secondMaxVal = arr[1];
    }
    else{
        maxVal = arr[1];
        secondMaxVal = arr[0];

    }

    for (int i = 2; i < n; i++)
    {
        
        if (arr[i] > maxVal)
        {
            secondMaxVal = maxVal;
            maxVal = arr[i];
            
        }
        if (arr[i] < maxVal && arr[i] > secondMaxVal)
        {
            secondMaxVal = arr[i];
        }
        
        
    }
    return secondMaxVal;
    
}

int secondSmallestElement(int arr[], int n){
    if(n < 2){
        return arr[0];
    }
    int smallVal, secondSmallVal;

    if (arr[0] < arr[1]) {
        smallVal = arr[0];
        secondSmallVal = arr[1];
    } else if (arr[0] > arr[1]) {
        smallVal = arr[1];
        secondSmallVal = arr[0];
    } else {
        smallVal = arr[0];
        secondSmallVal = INT_MAX;
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i] < smallVal)
        {
            secondSmallVal  = smallVal;
            smallVal = arr[i];
        }
        else if (arr[i] > smallVal && arr[i] < secondSmallVal){
            secondSmallVal = arr[i];
        }
    }
    
    return secondSmallVal;
}


int main() {
    int arr1[] = {10, 40, 30, 20};
    int arr2[] = {5};  // single element case

    cout << "Second largest in arr1: " << secondLargestElement(arr1, 4) << endl;
    cout << "Second largest in arr2: " << secondLargestElement(arr2, 1) << endl;
    cout << "Second smallest in arr1: " << secondSmallestElement(arr1, 4) << endl;
    cout << "Second smallest in arr2: " << secondSmallestElement(arr2, 1) << endl;

    return 0;
}

