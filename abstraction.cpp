#include <iostream>
using namespace std;

class Loan {
    public:
void applyloan() {

    checkcredit();
    verifydocuments();

    cout << "Loan applied succesfully" << endl;
}
private:
void checkcredit() {
    cout << "Credit checked succesfully" << endl;
 }
 void verifydocuments() {
    cout << "Documents verified succesfully" << endl;
 }

};

class Stove{
    private:
        int temperature = 100;
    public:
        int getTemperature(){
            return temperature;
        }
    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }else if(temperature > 50){
            this->temperature = 50;
        }
    }
}

int main() {
    Loan l1;
    l1.applyloan();
    return 0;
    Stove s1;
    cout << "The temperature is: " << s1.getTemperature(); << "\n";
    s1.setTemperature(49);
}


\\ Abstraction method : They will hide the process but you will get the output 
// Setter command can be used to WRITE private objects
// Getter command can be used to READ private objects