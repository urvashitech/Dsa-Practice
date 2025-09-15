/* Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one. 
    EXAMPLE : [4,1,2,1,2] -> 4
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int appearOnce(vector<int> & nums){
    sort(nums.begin(),nums.end());
    for (int i = 0; i < nums.size(); i+=2)
    {
        if (nums[i] != nums[i+1])
        {
            return nums[i];
        }
        
    }
    return nums.back();
    
}

int main() {
    vector<int> nums = {7,3,5,3,7};
    int result = appearOnce(nums);
    cout << "The single number is: " << result << endl;
    return 0;
}
