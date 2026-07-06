#include <iostream>
using namespace std;

enum Day{
    Sunday = 0, Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6
}

int main() {
    Day today = Tuesday;
    switch(today){
        case sunday:
            cout << "It is sunday!" << "\n";
            break;
        case monday:
            cout << "It is monday!" << "\n";
            break;
        case tuesday:
            cout << "It is tuesday!" << "\n";
            break;
        case wednesday:
            cout << "It is wednesday!" << "\n";
            break;
        case thrusday:
            cout << "It is thursday!" << "\n";
            break;
        case friday:
            cout << "It is friday!" << "\n";
            break;
        case saturday:
            cout << "It is saturday!" << "\n";
            break;
        
    }
}