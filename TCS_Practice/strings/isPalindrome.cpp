// Problem Statement: Given a string, check if the string is palindrome or not. A string is said to be palindrome if the reverse of the string is the same as the string.


#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
    int start = 0;
    int end = str.length()-1;
    while (start < end)
    {
        if(tolower(str[start]) != tolower(str[end])){
            return false;
        }
        start ++ ;
        end --;
    }
    return true;
}

int main(){
    string str;

    cout << "Enter the String: " << endl;
    getline(cin,str);
    cout << "String : " << str << endl;
    bool ans = isPalindrome(str);
    if (ans == true){
        cout << "String is a Palindrome" << endl; 
    }
    else
    {
        cout << "String is not a Palindrome" << endl;
    }
    
    return 0;
}