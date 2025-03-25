// Array in function 

#include <iostream>
using namespace std;

int totalChaiSErved(int chai [] , int size){
    int total = 0;
    for(int i=0 ; i< size  ; i++ ){
        total += chai[i];
    }
    return total;
}

int main(){
    int chai[7] = {10, 20, 30, 40, 50, 60, 70};
    totalChaiSErved(chai, 7);
    cout << "Total Chai Served: " << totalChaiSErved(chai, 7) << endl;
    return 0;
}