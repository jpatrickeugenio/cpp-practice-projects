
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cstdlib>

using namespace std;

void wait(int ms) {
    this_thread::sleep_for(chrono::milliseconds(ms));
}

void typeText(string text, int speed = 25) {
    for (char c : text) {
        cout << c << flush;
        wait(speed);
    }
    cout << endl;
}

int main() {
    // Green hacker-style terminal
    cout << "\033[32m";
    cout << "\033[2J\033[H";

    cout << "========================================\n";
    cout << "       CYBER SECURITY TERMINAL\n";
    cout << "========================================\n\n";

    typeText("[+] Initializing terminal...", 40);
    typeText("[+] Loading virtual environment...", 30);
    typeText("[+] Connecting to simulation server...", 30);

    wait(700);

    cout << "\n";
    typeText("[SCAN] Checking simulated system...");
    wait(500);
    typeText("[SCAN] Firewall status: ACTIVE");
    wait(500);
    typeText("[SCAN] Network status: SIMULATED");
    wait(500);
    typeText("[SCAN] Security status: PROTECTED");

    cout << "\n";
    typeText("[!] Starting fictional password analysis...");
    wait(500);

    string characters =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    for (int i = 0; i < 30; i++) {
        cout << "\r[ANALYZING] ";

        for (int j = 0; j < 16; j++) {
            cout << characters[rand() % characters.size()];
        }

        cout << flush;
        wait(100);
    }

    cout << "\n\n";
    typeText("[+] Simulation completed!");
    typeText("[+] No real passwords were accessed.");
    typeText("[+] All systems secure.");

    cout << "\n========================================\n";
    cout << "       SIMULATION COMPLETE\n";
    cout << "========================================\n";

    cout << "\033[0m";

    return 0;
}
