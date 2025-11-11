#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    int num1 = 10, num2 = 4;

    // Arithmetic operators
    cout << "Addition: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << "Division: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << "Modulus: " << num1 << " % " << num2 << " = " << num1 % num2 << endl;

    // Increment/Decrement
    cout << "Pre-increment: ++num1 = " << ++num1 << endl;  // num1 becomes 11
    cout << "Post-increment: num1++ = " << num1++ << ", now num1 = " << num1 << endl;
    cout << "Pre-decrement: --num2 = " << --num2 << endl;  // num2 becomes 3
    cout << "Post-decrement: num2-- = " << num2-- << ", now num2 = " << num2 << endl;

    // Combined assignment operators
    cout << "num1 += 2: " << (num1 += 2) << endl;
    cout << "num1 -= 2: " << (num1 -= 2) << endl;
    cout << "num1 *= 2: " << (num1 *= 2) << endl;
    cout << "num1 /= 2: " << (num1 /= 2) << endl;
    cout << "num1 %= 2: " << (num1 %= 2) << endl;

    // Comparison/Logical operators
    cout << "3 > 2 = " << (3 > 2) << endl;
    cout << "3 < 2 = " << (3 < 2) << endl;
    cout << "4 >= 3 = " << (4 >= 3) << endl;
    cout << "4 <= 3 = " << (4 <= 3) << endl;
    cout << "3 == 3 = " << (3 == 3) << endl;
    cout << "!(4 >= 3) = " << !(4 >= 3) << endl;

    // Boolean operators
    cout << "(true && false) = " << (true && false) << endl;
    cout << "(true || false) = " << (true || false) << endl;

    return 0;
}

