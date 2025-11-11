#include <iostream>
using namespace std;

int main() {
    // Implicit type casting
    double myNum = 15.5;
    int myNewNum;
    myNewNum = myNum;  // double -> int (fraction lost)
    cout << "Implicit cast double to int: " << myNewNum << endl;

    // Char casting
    bool boolValue = true;
    char myChar = 'C';
    int charCasted = myChar;  // char -> int (ASCII value)
    
    cout << "Char to int = " << charCasted << endl;
    cout << "Boolean true = " << boolValue << endl;

    return 0;
}

