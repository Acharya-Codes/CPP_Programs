#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
    string carName = "Dzire";
    string carColor = "Red";
    int carMilelage = 30;
    int noofwindows = 6;
    int noofairbags = 4;
    void acc() {
        cout << "Car started moving" << endl;
    }
    void brake() {
        cout << "Car stopped moving" << endl;
    }   
};
int main() {
    Car c1;
    cout << c1.carMilelage << endl;
    cout << c1.noofwindows << endl;
    cout << c1.noofairbags << endl;

    c1.carColor = "Blue";
    c1.carName = "Lichi";
    cout << c1.carColor << endl;
    cout << c1.carName << endl;

    return 0;
} 

