#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a;
    double b;
    char op;
    double result;

    cout << "Please enter the first number: ";
    cin >> a;
    cout << "Please enter the second number: ";
    cin >> b;
    cout << "Choose the operator(+,-,*,/): ";
    cin >> op;

    switch(op) {
        case '+':
            result = a + b;
            cout << "The result is: " << result << "\n";
            break;
        case '-':
            result = a - b;
            cout << "The result is: " << result << "\n";
            break;
        case '*':
            result = a * b;
            cout << "The result is: " << result << "\n";
            break;
        case '/':
            result = a / b;
            if(b == 0) {
                cout << "Cannot divide by zero";
            }else{
                cout << "The result is: " << result << "\n";
            }
            break;
        default:
            cout << "Please enter a valid operator";
    }

    return 0;
}