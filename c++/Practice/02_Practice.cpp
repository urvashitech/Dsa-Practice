// Modify Tea Price :
// Create a program where the user inputs a base price for tea. Use type casting to increase the price by 10% and display the new rounded new price using explicit casting. 

#include <iostream>
using namespace std;

int main(){
    int teaPrice;
    float total;

    cout << "Enter the Price of the Tea \n";
    cin >> teaPrice;
    cout << "Price of Your tea is: " << teaPrice << " rupees \n";
    total = teaPrice + (teaPrice * 0.1);
    cout << "Price of Your tea after 10% increase is: " << (float)total << " rupees \n";
}
