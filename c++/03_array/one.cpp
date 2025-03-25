#include <iostream>

using namespace std;

int main(){
    int chaiTemperature[5] = {80, 90, 70, 75};
    cout << "Temperature" << " of chai " << endl;
    for( int i=0 ; i<5 ; i++ ){
        cout << chaiTemperature[i] << endl;
    }

    return 0;
}