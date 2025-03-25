//write a program that keeps track of tea orderes.Each time a cup of team is made, decreases the number of cups remaining. The loop should run until all cups are served.

#include <iostream>
using namespace std;

int main(){
    int teaCups;

    cout << "Enter the number of tea cups to be severd : " ;
    cin >> teaCups;

    while (teaCups > 0){
        teaCups--;
        cout <<  "Serving the tea cup " << endl;
        cout << "Number of tea cups remaining are : " << teaCups << endl ;

    }
    cout << "All the tea cups has been served";

}
