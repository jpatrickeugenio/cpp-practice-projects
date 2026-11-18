#include <iostream>
using namespace std;

struct Player {
    string name;
    int level;
    int health;
    string role;
};

int main(){
  Player player1,player2;

  player1.name = "Ali";
  player1.level = 14;
  player1.health = 80;
  player1.role = "Assasin";

  cout << "(Enter Player 2 information)" << endl;

  cout << "Enter Player name:";
  cin >> player2.name;
  cout << "Enter Player level:";
  cin >> player2.level;
  cout << "Enter Player health:";
  cin >> player2.health;
  cout << "Enter Player role:";
  cin >> player2.role;

  cout << "\nName: " << player1.name << endl;
  cout << "Level:" << player1.level << endl;
  cout << "Health:" << player1.health << endl;
  cout << "Role:" << player1.role << endl;

  cout << "\nName: " << player2.name << endl;
  cout << "Level:" << player2.level << endl;
  cout << "Health:" << player2.health << endl;
  cout << "Role:" << player2.role << endl;

   if (player1.health > player2.health) {
    cout << "Player 1 has more health!" << endl;
} else if (player2.health > player1.health) {
    cout << "Player 2 has more health!" << endl;
} else {
    cout << "Both players have equal health!" << endl;
}





}








