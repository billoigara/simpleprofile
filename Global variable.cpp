#include <iostream>
using namespace std;

// Global variable declaration and initialization
int globalVar = 30;
const int age = 25; // Constant global variable. Value will not change

// Function declaration
void myFunction() {
    // Function code block
    cout << "Inside myFunction, globalVar = " << globalVar << endl;
}

int main() {
    // Local variable declaration
    int localAge = 20; // Initialized local variable

    cout << "Local age = " << localAge << endl;
    cout << "Global age = " << age << endl;
    cout << "global age = " << age << endl;

    myFunction(); // Call the function

    return 0;
}

