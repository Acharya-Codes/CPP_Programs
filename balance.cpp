<<<<<<< HEAD
#include <iostream>
using namespace std;

class BankAccount {
    private:
    float balance = 500;
    public:
    void showbalance() {
        cout << "Your balance is: "<< balance << endl;
    }
    void deposit(float amount) {
        if(amount>0) {
            balance+=amount;
        }else {
            cout << "Enter the correct amount";
        }
    }
    void withdraw(float amount) {
        if(balance>=amount){
            balance-=amount;
        }else{
            cout << "Invalid Amount";
        }
    }
};
int main() {
 BankAccount a1;
 a1.showbalance();
 a1.deposit(1200);
 a1.withdraw(600);
 a1.showbalance();

 return 0;
}

=======
#include <iostream>
using namespace std;

class BankAccount {
    private:
    float balance = 500;
    public:
    void showbalance() {
        cout << "Your balance is: "<< balance << endl;
    }
    void deposit(float amount) {
        if(amount>0) {
            balance+=amount;
        }else {
            cout << "Enter the correct amount";
        }
    }
    void withdraw(float amount) {
        if(balance>=amount){
            balance-=amount;
        }else{
            cout << "Invalid Amount";
        }
    }
};
int main() {
 BankAccount a1;
 a1.showbalance();
 a1.deposit(1200);
 a1.withdraw(600);
 a1.showbalance();

 return 0;
}

>>>>>>> b8255c96221b588acc587301369407d08324dcb6
