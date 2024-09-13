#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string op;
    double A, B;

    cout << "Select your Operation " << endl;
    cout << "(+ - * / sin cos tan sqrt) = ";
    cin >> op;

    if (op == "+" || op == "-" || op == "*" || op == "/") {
        cout << "Enter first number = ";
        cin >> A;
        cout << "Enter second number = ";
        cin >> B;
    } else if (op == "sin" || op == "cos" || op == "tan" || op == "sqrt") {
        cout << "Enter number = ";
        cin >> A;
    } else {
        cout << "Invalid operation" << endl;
        return 1;
    }

    if (op == "+") {
        cout << (A + B) << endl;
    } else if (op == "-") {
        cout << (A - B) << endl;
    } else if (op == "*") {
        cout << (A * B) << endl;
    } else if (op == "/") {
        if (B == 0) {
            cout << "Error: Division by zero" << endl;
        } else {
            cout << (A / B) << endl;
        }
    } else if (op == "sin") {
        cout << sin(A * M_PI / 180.0) << endl;
    } else if (op == "cos") {
        cout << cos(A * M_PI / 180.0) << endl;
    } else if (op == "tan") {
        cout << tan(A * M_PI / 180.0) << endl;
    } else if (op == "sqrt") {
        if (A < 0) {
            cout << "Error: Cannot calculate square root of a negative number" << endl;
        } else {
            cout << sqrt(A) << endl;
        }
    }

    return 0;
}
