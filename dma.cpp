<<<<<<< HEAD
// Dynamic memory allocation -->> Memory is created when the code is running
#include <iostream>
using namespace std;

int main() {
    int *p = new int;
    *p = 50;
    cout << *p;
    delete *p;
=======
// Dynamic memory allocation -->> Memory is created when the code is running
#include <iostream>
using namespace std;

int main() {
    int *p = new int;
    *p = 50;
    cout << *p;
    delete *p;
>>>>>>> b8255c96221b588acc587301369407d08324dcb6
}