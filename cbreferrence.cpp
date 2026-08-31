#include <iostream>
using namespace std;

    void deposit(int &Balance) {
        Balance=Balance+1000;
        cout << "The balance after the deposit is: "<<Balance<<endl;
    }
int main() {
    int Balance = 500;
    deposit(Balance);
    cout << "Updated balance: "<<Balance<<endl;
}
