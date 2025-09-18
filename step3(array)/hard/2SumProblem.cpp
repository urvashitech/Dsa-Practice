/*Problem Statement: Given an array of integers arr[] and an integer target.

1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

Note: You are not allowed to use the same element twice. Example: If the target is equal to 6 and num[1] = 3, then nums[1] + nums[1] = target is not a solution.

    
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  
            if (arr[i] + arr[j] == target) {
                return {i, j};   
            }
        }
    }
    return {-1, -1};  
}
int main() {
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    vector<int> result = twoSum(arr, n, target);

    if (result[0] == -1) {
        cout << "No such pair found" << endl;
    } else {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
        cout << "Values: " << arr[result[0]] << " and " << arr[result[1]] << endl;
    }

    return 0;
}

    
