#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice();
char getCompChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {

    char player;
    char computer;

    srand(time(NULL));

    player = getUserChoice();
    computer = getCompChoice();

    cout << "\n";
    cout << "You chose: ";
    showChoice(player);

    cout << "Computer chose: ";
    showChoice(computer);

    cout << "\n";
    chooseWinner(player, computer);

    return 0;
}

char getUserChoice() {

    char choice;

    do {
        cout << "Enter your choice (R/P/S): ";
        cin >> choice;

        choice = toupper(choice);

    } while(choice != 'R' && choice != 'P' && choice != 'S');

    return choice;
}

char getCompChoice() {

    int num = rand() % 3 + 1;

    switch(num) {
        case 1:
            return 'R';

        case 2:
            return 'P';

        case 3:
            return 'S';
    }

    return 'R';
}

void showChoice(char choice) {

    switch(choice) {

        case 'R':
            cout << "Rock\n";
            break;

        case 'P':
            cout << "Paper\n";
            break;

        case 'S':
            cout << "Scissors\n";
            break;
    }
}

void chooseWinner(char player, char computer) {

    if(player == computer) {
        cout << "It's a tie!\n";
        return;
    }

    switch(player) {

        case 'R':
            if(computer == 'S')
                cout << "You Win!\n";
            else
                cout << "You Lose!\n";
            break;

        case 'P':
            if(computer == 'R')
                cout << "You Win!\n";
            else
                cout << "You Lose!\n";
            break;

        case 'S':
            if(computer == 'P')
                cout << "You Win!\n";
            else
                cout << "You Lose!\n";
            break;
    }
}