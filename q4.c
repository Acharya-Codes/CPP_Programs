<<<<<<< HEAD
#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    int num = (rand() % 4) + 1;
    switch(num) {
        case 1:
            cout << "Acharya is ded ";
            break;
        case 2:
            cout << "Siddhesh is ded ";
            break;
        case 3:
            cout << "Kavi is ded ";
            break;
        case 4:
            cout << "Karun is ded ";
            break;
    }

    return 0;
=======
#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    int num = (rand() % 4) + 1;
    switch(num) {
        case 1:
            cout << "Acharya is ded ";
            break;
        case 2:
            cout << "Siddhesh is ded ";
            break;
        case 3:
            cout << "Kavi is ded ";
            break;
        case 4:
            cout << "Karun is ded ";
            break;
    }

    return 0;
>>>>>>> b8255c96221b588acc587301369407d08324dcb6
}