#include <iostream>
using namespace std;


int main(){

//Question 1. Passed or failed (If else statement)

int grade;

cout << "Enter Final grade:";
cin >> grade;

if(grade >= 75){
    cout << "PASSED";
}else{
    cout << "FAILED";
 }

return 0;
}