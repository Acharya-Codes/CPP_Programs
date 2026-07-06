#include <iostream>
using namespace std;
float balance = 0;
float deposit;
float withdraw;
bool isrun = true;
void checkBalance();
void Deposit();
void Withdraw();
void Exit();

int main() {
    int choice;
    cout << "---Welcome to Aachi's Bank---" << "\n";
    cout << "1.Check Balance" << "\n";
    cout << "2.Deposit amount" << "\n";
    cout << "3.Withdraw amount" << "\n";
    cout << "4.Exit" << "\n";
    while(isrun){
        cout << "Select the option which u want to choose(1/2/3): ";
        cin >> choice;
        if(choice == 1){
            checkBalance();
        } 
        else if(choice == 2){
            Deposit();
        }else if(choice == 3){
            Withdraw();
        }else if(choice == 4){
            Exit();
        }
        else{
            cout << "Please enter a valid choice!" << "\n";
        }        
    }
    return 0;
    }
    

void checkBalance(){
    cout << "Your current balance is: " << balance << "\n";
}
void Deposit(){
    while(isrun){
        cout << "Enter the amount u want to deposit: " << "\n";
        cin >> deposit;
        if(deposit > 0){
            balance += deposit;
            isrun = false;
        }
        else{
           cout << "Please enter a valid deposit amount" << "\n";
        } 
    }
}
void Withdraw(){
    while(isrun){
        cout << "Enter the amount u want to withdraw: " << "\n";
        cin >> withdraw;
        if(withdraw<= balance && withdraw > 0){
            balance -= withdraw;
            isrun = false;
        }
        else{
           cout << "Please enter a valid withdrawel amount" << "\n";
        } 
    }
}
void Exit(){
    cout << "You have exited the banking program!" << "\n";
    isrun = false;
}