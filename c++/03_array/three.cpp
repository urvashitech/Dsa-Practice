// Discussion about pointers 

#include <iostream>
using namespace std; 

int* prepareChaiOrder(int cups){
    int* order = new int[cups];
    for(int i=0 ;i<cups ;i++ ){
        order[i] = (i+1) * 10; 
    }
    return order;
}


int main(){
    int cups = 5;
    int* chaiOrder = prepareChaiOrder(cups);
    for(int i=0 ; i<cups ; i++){
        cout << "Chai " << i+1 << " : " << chaiOrder[i] << endl;
    }
    delete [] chaiOrder;
}