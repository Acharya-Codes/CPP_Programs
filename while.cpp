#include <iostream>
using namespace std;
int main() {
    string name;
    while(name.empty()){
        cout << "Enter your name: ";
        getline(cin,name);
    }
    cout << "Hello " << name << "\n";
    
// DO WHILE LOOP:

    string msg;
    do{
        cout << "Enter the message which u wanna say: ";
        getline(cin,msg);
        
    }while(msg.empty());
    cout << msg;

    return 0;
}