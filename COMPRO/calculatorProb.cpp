#include <iostream>
using namespace std;

int main (){

int num1,num2;
int choice;
double result;

cout << "========CALCULATOR==========" << endl;

cout << "Enter first number:";
cin >> num1;

cout << "Enter second number:";
cin >> num2;

cout << "======Choose an operation======" << endl;


cout << "1. Addition" << endl
     << "2. Subtraction" << endl
     << "3. Multiplication" << endl
     << "4. Division" << endl;

cout << "Enter your choice:";
cin >> choice;

switch (choice)
{
case 1:
    cout << num1 + num2;
    break;
case 2:
   cout << num1 - num2;
   break;
case 3:
   cout << num1 * num2;
   break;
case 4:
   cout << num1 / num2;
   break;

   default:
    cout << "Invalid operator!!!";
}








return 0;
}