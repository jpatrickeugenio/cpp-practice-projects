#include <iostream>
using namespace std;

int main (){

int Price;
int Quantity;

double Total;
double Discount;
double Finaltotal;

cout << "========SHOPPING CALCULATOR=========" << endl;

cout << "Enter product:";
cin >> Price;

cout << "Enter quantity:";
cin >> Quantity;

Total = Price * Quantity;
cout << "Total:" << Total << endl;

if (Total >= 1000 ){
    Discount = Total * 0.10;
    cout << "Discount:" << Discount << endl;
    Finaltotal = Total - Discount;
    cout << "Final Total:" << Finaltotal << endl;
}
else {
    Total = Price * Quantity;
    cout << "Total:" << Total << endl;
    Discount = 0;
    cout << "Discount:" << Discount << endl;
    Finaltotal = Total; 
    cout << "Final total:" << Finaltotal << endl;


}



}