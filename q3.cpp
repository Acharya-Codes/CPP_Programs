<<<<<<< HEAD
#include <iostream>
using namespace std;
int main() {
    float temp;
    char unit;
    cout << "Enter the temperature value: ";
    cin >> temp;
    cout << "Enter the unit(C/F): ";
    cin >> unit;

    if(unit == 'C'){
        temp = (temp * 9.0/5.0) + 32;
        cout << "The temperature in Faranheit is: " << temp << "\n";
    }else if(unit == 'F'){
        temp = (temp - 32)* 5.0/9.0;
        cout << "The temperature in Celsius is: " << temp << "\n";
    }else{
        cout << "Please neter a valid input!";
    }

    return 0;
=======
#include <iostream>
using namespace std;
int main() {
    float temp;
    char unit;
    cout << "Enter the temperature value: ";
    cin >> temp;
    cout << "Enter the unit(C/F): ";
    cin >> unit;

    if(unit == 'C'){
        temp = (temp * 9.0/5.0) + 32;
        cout << "The temperature in Faranheit is: " << temp << "\n";
    }else if(unit == 'F'){
        temp = (temp - 32)* 5.0/9.0;
        cout << "The temperature in Celsius is: " << temp << "\n";
    }else{
        cout << "Please neter a valid input!";
    }

    return 0;
>>>>>>> b8255c96221b588acc587301369407d08324dcb6
}