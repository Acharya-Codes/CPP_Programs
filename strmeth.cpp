#include <iostream>
using namespace std;
int main() {
    string name;
    cout << "Enter your name: " << "\n";
    getline(cin,name);

    if(name.length() > 12){
        cout << "The name cant be more than 12 characters!" << "\n";
    }else{
        cout << "Welcome " << name << "\n";
    }

    if(name.empty()){
        cout << "Username cant be empty!" << "\n";
    }else{
        cout << "Welcome " << name << "\n";
    }

    name.append("@minecraft");
    cout << "Username changed to " << name << "\n";

    cout << name.at(0);

    name.insert(0,"@love");
    cout << "Username changed to " << name << "\n";

    cout << name.find(" ");

    name.erase(0,3);
    cout << "Welcome " << name << "\n";

    return 0;
}