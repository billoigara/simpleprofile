#include <iostream>
using namespace std;

int main() {
    // --- PROFILE CREATION ---
    string username, password;

    cout << "=== Create Your Profile ===" << endl;
    cout << "Enter a username: ";
    cin >> username;

    cout << "Create a password: ";
    cin >> password;

    cout << "\nProfile created successfully!" << endl;
    cout << "------------------------------\n";

    // --- LOGIN SECTION ---
    string enteredUser, enteredPass;
    int attempts = 0;

    cout << "=== LOGIN ===" << endl;

    while (attempts < 3) {
        cout << "Enter username: ";
        cin >> enteredUser;

        cout << "Enter password: ";
        cin >> enteredPass;

        if (enteredUser == username && enteredPass == password) {
            cout << "Login successful! Welcome, " << username << "!";
            return 0;
        }
        else {
            attempts++;
            cout << "Incorrect username or password!" << endl;
        }
    }

    cout << "Too many attempts. Account blocked.";

    return 0;
}

