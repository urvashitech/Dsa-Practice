// we will take input from user in this code 
#include <iostream>
#include <string>
using namespace std;

int main(){
    string userTea;
    int teaQuantity;
    cout<< "what would to like to have in a tea?";
    getline(cin,userTea);

    cout << "How many cups of" << userTea << "Would you like to have";
    cin >> teaQuantity;
    cout << "You have ordered " << teaQuantity << " cups of " << userTea << " tea" << endl;
    return 0;


}