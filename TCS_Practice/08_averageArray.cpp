//Average of all the elements in the array .

#include<bits/stdc++.h>
using namespace std;

float average(vector<int> &arr , int length){
    float avg = 0;
    float sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + arr[i];
    }

    avg = sum / length;
    return avg;
    
}
int main(){

 
    int length;
    cout << "Enter the length of array\n"; 
    cin >> length; 
    cout <<"Enter the Elements\n";

    vector<int> arr(length);
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    float ans = average(arr,length);
    cout << " Average is : " << ans ;

    return 0;
}