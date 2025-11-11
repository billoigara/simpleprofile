#include <iostream>
#include <string>
#include <iomanip> // for setw
using namespace std;

int main() {
    // Declare variables
    string firstName, lastName, fullName, favoriteMeal, favoriteMovie;

    // Ask user for input
    cout << "Enter your first name: ";
    getline(cin, firstName);

    cout << "Enter your last name: ";
    getline(cin, lastName);

    // Combine first and last name
    fullName = firstName + " " + lastName;

    cout << "Enter your favorite meal: ";
    getline(cin, favoriteMeal);

    cout << "Enter your favorite movie: ";
    getline(cin, favoriteMovie);

    int width = 40; // Width of the box

    // Top border
    cout << "\n+" << string(width, '-') << "+" << endl;

    // Title (centered)
    cout << "|" << setw((width + 22) / 2) << "Bill Oigara Profile"
         << setw((width - 22) / 2 + 1) << "|" << endl;

    // Separator
    cout << "+" << string(width, '-') << "+" << endl;

    // Content lines
    cout << "| First Name:     " << setw(width - 16) << left << firstName << "|\n";
    cout << "| Last Name:      " << setw(width - 16) << left << lastName << "|\n";
    cout << "| Full Name:      " << setw(width - 16) << left << fullName << "|\n";
    cout << "| Favorite Meal:  " << setw(width - 16) << left << favoriteMeal << "|\n";
    cout << "| Favorite Movie: " << setw(width - 16) << left << favoriteMovie << "|\n";

    // Bottom border
    cout << "+" << string(width, '-') << "+" << endl;

    return 0;
}

