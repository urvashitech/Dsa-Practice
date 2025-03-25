//create a program that asks the user if they want more tea. Keep asking them until they type "no" .

#include <iostream>
#include <string>
using namespace std;

int main(){
    string response;

    do{
        cout << "Do you want more tea (yes/no)? ";
        cin >> response;

    }
    while( response != "No" &&    response != "no"); 
}