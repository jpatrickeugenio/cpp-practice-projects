#include <iostream>
using namespace std;

int findLargest(int num1,int num2){
     if (num1 > num2){
        return num1;
     }else{
        return num2;
     }
}

int main(){

int num1,num2;

cout << "===Finding the largest number===" << endl;
cout << "Enter first number:";
cin >> num1;
cout << "Enter second number:";
cin >> num2;

cout << "The largest number is " << findLargest(num1,num2);


}