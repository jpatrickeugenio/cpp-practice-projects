#include <iostream>
using namespace std;

int main(){

//Question 3. School Canteen Order (Switch Statement)

int choice;
int quantity;
int price;
int total = 0;

cout << "****** SCHOOL CANTEEN *****" << endl;
cout << "[1] Burger         45 pesos" << endl;
cout << "[2] Spaghetti      60 pesos" << endl;
cout << "[3] Fried Chicken  75 pesos" << endl;
cout << "[4] Siomai Rice    50 pesos" << endl;
cout << "***************************" << endl;

cout << "Enter Choice:";
cin >> choice;
cout << "Enter Quantity:";
cin >> quantity;

switch(choice){

case 1:
    price = 45;
    total = price *= quantity;
    cout << "You ordered " << quantity << " Burger." << endl;
    cout << "Total amount:" << total;
    break;
case 2:
    price = 60;
    total = price *= quantity;
    cout << "You ordered " << quantity << " Spaghetti." << endl;
    cout << "Total amount:" << total;
    break;
case 3:
    price = 75;
    total = price *= quantity;
    cout << "You ordered " << quantity << " Fried Chicken ." << endl;
    cout << "Total amount:" << total;
    break;
case 4:
    price = 50;
    total = price *= quantity;
    cout << "You ordered " << quantity << " Siomai Rice." << endl;
    cout << "Total amount:" << total;
    break;
    default:
    cout << "Invalid choice. Please select 1 to 4 only.";
}
    return 0;
}