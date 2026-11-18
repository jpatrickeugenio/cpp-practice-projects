#include <iostream>
#include <string>
using namespace std;


enum role {
FIGHTER,
TANK,
MARKSMAN

};

enum map{
    FOREST,
    DESERT,
    ISLAND
};

int main(){

    int choice1,choice2;
    role roleplayer;
    map playermap;

    do {
        cout << "Choose your role\n";
        cout << "1. Fighter\n";
        cout << "2. Tank\n";
        cout << "3. Marksman\n";
        cout << "Enter choice(1-3):";
        cin >> choice1;

        if(choice1 == 1){
            roleplayer = FIGHTER;
            cout << "You chose fighter\n";
        } else if(choice1 == 2){
            roleplayer = TANK;
            cout << "You chose Tank\n";
        } else if(choice1 == 3){
            roleplayer = MARKSMAN;
            cout << "You chose Marksman\n";
        } else {
            cout << "Invalid choice ";
        }

    } while (choice1 < 1 || choice1 > 3);

    do{
        cout << "Choose your map\n";
        cout << "1. Forest\n";
        cout << "2. Desert\n";
        cout << "3. Island\n";
        cout << "Enter choice (1-3):";
        cin >> choice2;
        
        if(choice2 == 1){
            playermap = FOREST;
            cout << "You chose Forest";
        }else if(choice2 == 2){
            playermap = DESERT;
            cout << "You chose Desert";
        }else if(choice2 == 3){
            playermap = ISLAND;
            cout << "You chose Island;";
        }else{
            cout << "Invalid choice\n";
        }
    } while(choice2 < 1 || choice2 > 3);

    int attackdamage;

    switch (roleplayer){
        case FIGHTER:
        attackdamage = 30;
        break;
        case TANK:
        attackdamage = 10;
        break;
        case MARKSMAN:
        attackdamage = 25;
        break;
    }

    string enemy = "Goblin";
    int enemyhealth = 100;
    int playerhealth = 100;


    cout << "\nThe game is starting\n";
    cout << "Enemy: " << enemy << endl;
    cout << "Enemy health: " << enemyhealth << endl;
    cout << "Your Health:" << playerhealth << endl;

    while( enemyhealth > 0 && playerhealth > 0){  
      int action;
      

      cout << "(Fight your enemy)" << endl;
      cout << "1. ATTACK" << endl;
      cout << "2. CHECK ENEMY HEALTH" << endl;
      cout << "3. HEAl" << endl;
      cout << " Enter your action:";
      cin >> action;

     if(action == 1){

        enemyhealth -= attackdamage;

        if(enemyhealth < 0){
            enemyhealth = 0;
        }
        if(enemyhealth > 0){
            playerhealth -= 10;
        
        if (playerhealth < 0) {
           playerhealth = 0;
        }
    }
    
        cout << "\nYour hero attack the " << enemy << endl;
        cout << "Damage: " << attackdamage << endl;
        cout << "Enemy heath:" << enemyhealth << endl;
        cout << "Your health:" << playerhealth << endl;

     }else if(action == 2){
        cout << enemy << " HP: " << enemyhealth << endl;

     } else if(action == 3){
        playerhealth += 5;

        if(playerhealth > 100){
            playerhealth = 100;
        }
        cout << "Healing...." << endl;
        cout << "Your health: " << playerhealth << endl;
        
     }
     else{
        cout << "Invalid action" << endl;
     }
    
    }

    if (enemyhealth <= 0) {
    cout << "\nYou defeated the " << enemy << "!\n";
    cout << "VICTORY!!!\n";
} else {
    cout << "\nYou were defeated by the " << enemy << "!\n";
    cout << "GAME OVER!\n"; 
}


    return 0;
}


