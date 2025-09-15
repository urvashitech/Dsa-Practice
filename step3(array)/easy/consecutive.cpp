/* Problem Statement: Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array. 
    EXAMPLE : {1, 1, 0, 1, 1, 1} -> 3
*/

#include<iostream>
#include<vector> 
using namespace std;


int consecutive(int arr[], int n){
     
    int flag = 0;
    int maxVal = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            flag += 1;
            maxVal = max(maxVal , flag);
        }
        else{
            flag = 0;
        }
        
        
    }
    
    return maxVal;
    
}

int main(){
    int n = 6;
    int arr[n] = {1,1,0,1,1,1};
    int cons = consecutive(arr,n);
    cout << "The maximum number of consecutive 1's is : "  << cons << endl ; 
    return 0;
}
