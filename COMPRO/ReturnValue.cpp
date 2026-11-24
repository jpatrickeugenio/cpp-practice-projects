#include <iostream>
using namespace std;

double calculateAverage(double num1, double num2, double num3) {
    double sum = num1 + num2 + num3;
    return sum / 3.0;
   
    
}

int main(){
    double num1,num2,num3;

    cout << "Enter first grade:";
    cin >> num1;
    cout << "Enter second grade:";
    cin >> num2;
    cout << "Enter third grade:";
    cin >> num3;

    double average = calculateAverage(num1,num2,num3);
    cout << "Your average is:" << average;

    calculateAverage(num1,num2,num3);


}