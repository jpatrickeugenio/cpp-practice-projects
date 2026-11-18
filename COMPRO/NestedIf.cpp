#include <iostream>
using namespace std;

int main(){

int PIN;
int Balance = 5000;
int Withdraw;

cout << "(=ATM WITHDRAWAL=)" << endl;

cout << "Enter PIN:";
cin >> PIN;

if(PIN == 1234){
    cout << "Enter amount to withdraw:";
    cin >> Withdraw;
    if(Withdraw <= Balance){
        Balance -= Withdraw;
        cout << "Withdrawal successful." << endl;
        cout << "Remaining Balance:" << Balance;

    }if(Withdraw > Balance){
        cout << "Insufficient balance.";
    }
}else{
    cout << "Incorrect PIN. Transaction cancelled.";
}

    return 0;
}