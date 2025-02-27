// program to learn type casting 
#include <iostream>
using namespace std;

int main(){
    float teaPrice = 49.99;
    int roundedTeaPrice = (int) teaPrice;
    int teaQuantity = 5;
    double totalePrice = teaQuantity * teaPrice;

    cout << "Total price is " << totalePrice << " rupees" << endl;
    cout << "Tea is " << roundedTeaPrice << " rupees" << endl;



}