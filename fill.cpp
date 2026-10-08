<<<<<<< HEAD
#include <iostream>
using namespace std;
int main(){
    string foods[5];
    fill(foods,foods+5,"I love you");

    for(string food : foods){
        cout << food << "\n";
    }

    string names[18];
    fill(names,names + 6,"Acharya");
    fill(names+6,names+12,"Siddhesh");
    fill(names+12,names+18,"Kavi");

    for(string name : names) {
        cout << name << "\n";
    }

    return 0;
=======
#include <iostream>
using namespace std;
int main(){
    string foods[5];
    fill(foods,foods+5,"I love you");

    for(string food : foods){
        cout << food << "\n";
    }

    string names[18];
    fill(names,names + 6,"Acharya");
    fill(names+6,names+12,"Siddhesh");
    fill(names+12,names+18,"Kavi");

    for(string name : names) {
        cout << name << "\n";
    }

    return 0;
>>>>>>> b8255c96221b588acc587301369407d08324dcb6
}