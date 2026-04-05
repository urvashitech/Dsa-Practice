//Problem Statement: Given a string, write a program to count the number of vowels, consonants, and spaces in that string.
//Example 1:
// Input: string str=”Take u forward is Awesome”
// Output: 
// Vowels: 10
// Consonants: 11
// White spaces: 4

#include<bits/stdc++.h>
using namespace std;

int countVCW(string str){
    int vowels = 0;
    int consonants = 0;
    int spaces = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] =='u')
        {
            vowels+=1;

        }
        else if (str[i] == ' ')
        {
            spaces+=1;
        }
        else
        {
            consonants+=1;
        }
        
    }
    cout << "Vowels: " << vowels << "\n";
    cout << "Consonants: " << consonants << "\n";
    cout << "White Spaces: " << spaces << "\n";
}

int main(){

    string str;
    cout << "Enter a String: \n" ;
    getline(cin,str);
    
    int ans = countVCW(str);
    return 0;
}
