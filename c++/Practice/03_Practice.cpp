//Create a program that calculates the total price of tea cups. The user inputs the number of cups they want and the price per cup. The Program should calculate the total price, apply a 5% discount if the total price is abouve a certain amount , and show the final price.

#include <iostream>
using namespace std;

int main(){
    int cup;
    double teaPrice , totalPrice , discountPrice;
    cout << "Enter the number of cups you want : ";
    cin >> cup;
    cout << "Enter the price of tea per cup : ";
    cin >> teaPrice ;
    totalPrice = cup * teaPrice;
    if (totalPrice > 100) {
        discountPrice = totalPrice - (totalPrice * 0.05);
        cout << "The total price is : " << totalPrice << endl;
        cout << "You have got a 5% discount" << endl;
        cout << "The final price is : " << discountPrice << endl;
    }
    else {
        cout << "The total price is : " << totalPrice << endl;
    }
}
