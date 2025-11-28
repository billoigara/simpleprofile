#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to create and save a profile
void createProfile() {
    string username, password;

    cout << "\n--- Create Profile ---\n";
    cout << "Enter a username: ";
    cin >> username;

    cout << "Create a password: ";
    cin >> password;

    ofstream file("profile.txt");
    if (file.is_open()) {
        file << username << endl;
        file << password << endl;
        file.close();
        cout << "Profile saved successfully!\n\n";
    } else {
        cout << "Error! Could not save profile.\n";
    }
}

// Function to log in using saved profile
void login() {
    string savedUser, savedPass;
    string inputUser, inputPass;

    ifstream file("profile.txt");
    if (!file.is_open()) {
        cout << "No saved profile found! Please create one first.\n";
        return;
    }

    // Read saved credentials
    getline(file, savedUser);
    getline(file, savedPass);
    file.close();

    cout << "\n--- Login ---\n";
    cout << "Enter username: ";
    cin >> inputUser;

    if (inputUser != savedUser) {
        cout << "Username not found!\n";
        return;
    }

    int attempts = 3;
    while (attempts > 0) {
        cout << "Enter password: ";
        cin >> inputPass;

        if (inputPass == savedPass) {
            cout << "Login successful! Welcome, " << savedUser << "!\n";
            return;
        } else {
            attempts--;
            if (attempts > 0)
                cout << "Wrong password! Attempts remaining: " << attempts << endl;
        }
    }

    cout << "Password blocked! Too many failed attempts.\n";
}

int main() {
    int choice;

    do {
        cout << "\n=== USER PROFILE SYSTEM ===\n";
        cout << "1. Create Profile\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createProfile();
                break;
            case 2:
                login();
                break;
            case 3:
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Invalid option!\n";
        }

    } while (choice != 3);

    return 0;
}

