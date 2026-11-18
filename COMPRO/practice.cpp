#include <iostream>
using namespace std;

int main(){

string username;
string password;

string user;
string pass;

char login;

cout << "(Create a account)" << endl;

  cout << "Create username:";
  cin >> username;
  cout << "Create password:";
  cin >> password;

  cout << "(Successfully Created)" << endl;

  cout << "LOG IN (Y,N): ";
  cin >> login;

  if(login == 'Y' || login == 'y'){
    cout << "(WELCOME TO LOGIN)" << endl;

  do{
    cout << "Enter username:";
    cin >> user;

    cout << "Enter password:";
    cin >> pass;
    
    if(user != username || pass != password){
      cout << "Wrong username and password. Try again!!" << endl;

    }
  }while(user != username || pass != password);

  cout << "(Successfully logged in)" << endl;
  cout << "Hello " << username;
  }
  else{
    cout << "Thank you come again!!!";
  }




  }