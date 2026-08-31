#include <iostream>
using namespace std;
int main() {
    int times;
    cout << "How many times do u wanna repeat the loop: ";
    cin >> times;
    for(int i = 0; i < times; i++) {
        cout << "Vanakam Nanba!" << "\n";
    }

// FOR - EACH LOOP

// Less felxible than FOR loop!!   
    string names[] = {"Acharya","Kavi","Siddhesh"};
    for(string name:names){
        cout << student << "\n";
    }

    return 0;
}