#include <iostream>
using namespace std;

void Greet(string name){
    cout << "[Personal information]" << endl;
    cout << "Hello " << name << endl;
}

void CheckAge(int age){
    cout << "You are " << age << " years old." << endl;
}
void DisplayAddress(char choice, string address) {
    if (choice == 'Y' || choice == 'y') {
        cout << "You are from " << address << endl;
    }
    else if (choice == 'N' || choice == 'n') {
        cout << "Address not displayed." << endl;
    }
    else {
        cout << "Invalid choice." << endl;
    }
}
void DisplayExperience(char experience, string job) {
    if (experience == 'Y' || experience == 'y') {
        cout << "Your job was " << job << endl;
    }
    else if (experience == 'N' || experience == 'n') {
        cout << "No work experience yet!" << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }
}

int main(){
    string name;
    string address;
    string job;
    char experience;
    char choice;
    int age;
    
    cout << "Enter your name:";
    getline(cin, name);

    cout << "Enter your age:";
    cin >> age;

    cout << "Do you want to display your address? (Y,N):";
    cin >> choice;

    cin.ignore();

    if(choice == 'Y' || choice == 'y'){
       cout << "Enter your address:";
       getline(cin, address);
    }

    cout << "Do you have work experience? (Y/N):";
    cin >> experience;
    cin.ignore();

    if (experience == 'Y' || experience == 'y') {
    cout << "Enter your previous job title: ";
    getline(cin, job);
   }

    
    Greet(name);
    CheckAge(age);
    DisplayAddress(choice, address);
    DisplayExperience(experience,job);
}