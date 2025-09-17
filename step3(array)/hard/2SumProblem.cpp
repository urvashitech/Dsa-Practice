/*Problem Statement: Given an array of integers arr[] and an integer target.

1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

Note: You are not allowed to use the same element twice. Example: If the target is equal to 6 and num[1] = 3, then nums[1] + nums[1] = target is not a solution.

    
*/
#include<iostream>
using namespace std;



int twoSum(int arr[] , int n , int target){
    
    for (int i = 0; i < n; i++)
    {
       int x = arr[i];
       int y = target - x;
        for (int j = 0; j < n; j++)
        {
            if (j != i && arr[j] == y)
            {
                return 1;
            } 
        }      
    }
    return 0;
}

int main(){
    int N = 5;
    int arr[N] = {2,6,5,8,11};
    int target = 14;
    int temp = twoSum(arr,N,target);
    cout << temp << endl ;
}
    
