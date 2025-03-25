// write a code to print the following pattern
// A
// B B 
// C C C
// D D D D
// E E E E E

#include <iostream>
using namespace std;


int main() {
    for (char i = 'A'; i <= 'E'; i++) { 
        for (int j = 0; j <= i - 'A'; j++) {  
            cout << i << " ";  
        }
        cout << endl;
    }
    return 0;
}