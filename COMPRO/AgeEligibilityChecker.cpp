#include <iostream>
using namespace std;

bool CheckAge(int age){
    if (age >= 18){
        cout << "You are eligible!" << endl;
        return true;
    }else{
        cout << "You are too young!!" << endl;
        cout << "You are not eligible!" << endl;
        return false;
    }
    
}

int main(){
    int age;

    cout << "Enter your age:";
    cin >> age;
    bool eligible = CheckAge(age);
    return 0;
}