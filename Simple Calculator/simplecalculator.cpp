#include <iostream>

using namespace std;
int main() {
    char op;
    double n1, n2;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> op;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    switch(op) {
    case '+':
        cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
        break;
    case '/':
        if(n2 != 0.0)
            cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
        else
            cout << "Divide by 0 error!" << endl;
        break;
    default:
        cout << "Invalid operation!" << endl;
    }
    return 0;}


