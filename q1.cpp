#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float hyp;
    float base;
    float height;
    cout << "Enter the value of the base: " <<;
    cin >> base;
    cout << "Enter the value of the height: " <<;
    cin >> height;
    hyp = sqrt(pow(base,2) + pow(height,2));
    cout << "The value of the hypotenuse is: " << hyp << "\n";
    return 0;
}