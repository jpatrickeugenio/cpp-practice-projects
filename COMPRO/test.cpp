#include <iostream>
#include <string>
using namespace std;

int main (){


    string username;
    string password;

    cout << "======Create an account======\n";
    //create an account 
    cout << "Enter your username: ";
    cin >> username;

    cout << "Enter your password: ";
    cin >> password;

    cout << "\nAccount created succesfully!!" << endl;
    // login
    
    string loginUser;
    string loginPass;

    cout << "====== LOGIN ======\n";

    cout << "ENTER USERNAME: ";
    cin >> loginUser;

    cout << "ENTER PASSWORD: ";
    cin >> loginPass;

    if (loginUser==username && loginPass==password){
        cout << "Login succesfull! " << endl << "Welcome to my website";
    }
    else {
        cout << "Invalid username or password " << "\n" << "please try again ";
    }








    return 0;
}