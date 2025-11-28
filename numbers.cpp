#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    do {
        cout << "Enter an integer (0 to stop): ";
        cin >> number;

        sum += number;   // Add the number to the total

    } while (number != 0);   // Continue until the user enters 0

    cout << "The sum of the numbers is: " << sum << endl;

    return 0;
}

