#include <iostream>
using namespace std;

bool checkPass(int score){
    if(score >= 75){
        return true;
    }else{
        return false;
    }
}

int main(){
   int score;

   cout << "Enter your score:";
   cin >> score;
   bool check = checkPass(score);
   if(check == true){
    cout << "Congratulations! You passed";
   }else{
    cout << "Sorry, you failed";
   }
}