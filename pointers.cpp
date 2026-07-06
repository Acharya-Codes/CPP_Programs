#include <iostream>
using namespace std;
int main() {
    string name = "Bro";
    string* pName = &name;
    string names[2] = {"Acharya","Siddhesh"};
    cout << pName << "\n";
    cout << *pName << "\n"; // De reference operator!
    cout << names << "\n";
    
    return 0;
}