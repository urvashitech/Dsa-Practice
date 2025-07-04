// Problem : to check if a string is Palindrome or not

#include<iostream>
using namespace std ; 

bool isPalindrome(string str , int left , int right){
    if (left >= right)
        return true ;
    
    if (str[left] != str[right])
        return false;

    return isPalindrome(str , left +1 , right -1);
    
    
    
}

int main(){
    return 0 ; 
}