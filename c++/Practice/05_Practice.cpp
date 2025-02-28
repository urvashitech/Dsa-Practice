// A tea shop offers a loyalty program. Customers who buy more than 20 cups of tea get a special "Gold" badge, and those who buy 10 to 20 cups get a "silver" badge. write a program todisplay the badge they will receive based on the number of cups they buy.

#include <iostream>
using namespace std;

int main(){
    int numCups; 
    
    cout << "Enter the number of cups you buy : ";
    cin >> numCups;

    if (numCups >= 20) {

        cout << "Congratulations!! You get GOLD badge" <<  endl;
    }
    else if (numCups >= 10 && numCups < 20 ) {
        cout <<  "Congratulations!! You get SILVER badge" <<  endl;
    }
    else {
        cout << "Sorry You didn't get any badge" << endl;
    }
}