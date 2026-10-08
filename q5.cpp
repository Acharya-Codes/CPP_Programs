<<<<<<< HEAD
#include <iostream>
using namespace std;
#include <ctime>

int main() {
    int guess;
    int tries = 0;
    bool isrun = true;

   
    srand(time(NULL));

    int num = (rand() % 100) + 1;

    cout << "Guess a number between 1 and 100\n";

    while (isrun) {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess < 1 || guess > 100) {
            cout << "Please enter a number between 1 and 100\n";
        } else if (num > guess) {
            cout << "Too low!\n";
        } else if (num < guess) {
            cout << "Too high!\n";
        } else {
            cout << "Congrats broh u won!\n";
            cout << "Number of tries: " << tries << "\n";
            isrun = false;
        }
    }

    return 0;
=======
#include <iostream>
using namespace std;
#include <ctime>

int main() {
    int guess;
    int tries = 0;
    bool isrun = true;

   
    srand(time(NULL));

    int num = (rand() % 100) + 1;

    cout << "Guess a number between 1 and 100\n";

    while (isrun) {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess < 1 || guess > 100) {
            cout << "Please enter a number between 1 and 100\n";
        } else if (num > guess) {
            cout << "Too low!\n";
        } else if (num < guess) {
            cout << "Too high!\n";
        } else {
            cout << "Congrats broh u won!\n";
            cout << "Number of tries: " << tries << "\n";
            isrun = false;
        }
    }

    return 0;
>>>>>>> b8255c96221b588acc587301369407d08324dcb6
}