// write a program that prints the brewing instructions for making 5 cups of tea. The brewing should be printed once for each cup using a for loop. 

#include <iostream>
using namespace std;

int main(){
    int teaCups = 5;

    for (int i = 1 ; i <= teaCups ; ++i)
    {
        cout << i << endl ; 
        cout << "Brewing " << i << " of tea" << endl ;
    }
    return 0;
    
}