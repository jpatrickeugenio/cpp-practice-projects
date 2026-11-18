#include <iostream>
using namespace std;

int main(){

int parked;
int fee;

cout << "Enter number of hours parked:";
cin >> parked;

if(parked <= 0){
    cout << "Invalid number of hours";
}else if( parked <= 3){
    fee = 40;
    cout << "Parking fee:" << fee << " Pesos.";
}else{
    fee = 40 + (parked - 3) * 20;
    cout << "Parking fee:" << fee << " Pesos";
}

    return 0;
}