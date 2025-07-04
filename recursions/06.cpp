// Problem : Write a code to reverse an array 

#include <iostream>
using namespace std ;


void reverse(int arr[], int start ,int end ){
    if (start < end)
    {
        swap(arr[start] , arr[end]);
        return reverse(arr , start + 1 , end -1 );
    }
    
    
}
void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}

int main(){
    int n = 5;
   int arr[] = { 5, 4, 3, 2, 1 };
   reverse(arr, 0, n - 1);
   printArray(arr, n);
   return 0;
    return 0;
}