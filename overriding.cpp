#include <iostream>
using namespace std;

class Payment {
    public:
    void pay() {
       cout << "Payment made succesfully!" << endl;
    }
};
class GPay : public Payment {
public:
    void gpay() {
        cout << "Payment made succesfully using GPay!" << endl;
        }
};
   
class PhonePay : public Payment {
public:
    void phonepay() {
        cout << "Payment made succesfully using PhonePay!" << endl;
    }
};
    

int main() {
    GPay g;
    PhonePay p;
    g.gpay();
    p.phonepay();
    return 0;
}