// Tea Information Display : 
// Write a Program that declares variables to store the type of tea, its price per kg(float), and its rating(char). Use data types effectively and print them in a formated output using escape sequences. 

#include <iostream>
#include <string>
using namespace std;

int main(){
    string teaName = "Green Tea";
    float teaPrice = 49.99;
    char rating = 'A';
    cout << "Tea Name : " << teaName << "\n" ;  
    cout << "Tea Price : " << teaPrice << "\n" ; 
    cout << "Tea Rating : " << rating << "\n" ; 
}