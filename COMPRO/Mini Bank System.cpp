#include <iostream>
using namespace std;

void checkBalance(int Balance){
    Balance == Balance;
}

void depositMoney(int amount, int &Balance){
    Balance += amount;
}
int main(){
    int Balance = 1000;
    int choice;
    int deposit;
    int withdraw;

  do{
    cout << "|MINI BANK SYSTEM|" << endl;

    cout << "1.Check balance" << endl;
    cout << "2.Deposit money" << endl;
    cout << "3.Withdraw money" << endl;
    cout << "4.Exit" << endl;
    cout << "Enter your choice:";
    cin >> choice;
   
  
    switch (choice)
    {
    case 1:
        cout << "Your balance:" << Balance << endl;
        break;
    case 2:
        cout << "Enter amount to deposit:";
        cin >> deposit;
        depositMoney(deposit, Balance);
        break;
    case 3:
        cout << "Enter amount to withdraw:";
        cin >> withdraw;
    case 4:
        cout << "Goodbye!!!" << endl;
    default:
        break;
    }
}while(choice < 4);

}