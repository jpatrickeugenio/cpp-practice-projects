#include <iostream>
using namespace std;

int main (){

for(int i = 1; i <= 10; i++){
    for (int j = 10; j >= i; j--){
        cout << " ";
    }
   for (int j = 1; j <= i*2 -1; j++){
    cout << "*";    
   }
   cout << endl;
}
for(int x = 9; x >= 1; x--){
    for(int z = 0; z <= 10 -x; z++){
        cout << " ";
    }
    for(int z = 1; z <= 2 * x -1; z++){
        cout << "*";
    }
    cout << endl;
}



}