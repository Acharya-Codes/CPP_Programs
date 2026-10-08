<<<<<<< HEAD
#include <iostream>
#include <ctime>
using namespace std;

void drawBoard(char *spaces);
void playermove(char *spaces, char player);
void computermove(char *spaces, char computer);
bool checkwinner(char *spaces, char player, char computer);
bool istie(char *spaces);

int main(){
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);
    while(running){
        playermove(spaces, player);
        drawBoard(spaces);
        if(checkwinner(spaces, player, computer)){
            running = false;
            break;
        }else if(istie(spaces)){
            running=false;
            break;
        }
        computermove(spaces, computer);
        drawBoard(spaces);
        if(checkwinner(spaces, player, computer)){
            running = false;
            break;
        }else if(istie(spaces)){
            running=false;
            break;
        }
    }
    return 0;
}

void drawBoard(char *spaces){
    cout << "\n";
    cout << "     |     |     \n";
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "\n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "\n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "\n";
    cout << "     |     |     \n";
    cout << "\n";
}
void playermove(char *spaces, char player){
    int num;
    do{
        cout << "Enter a spot to fill the marker(1-9): " << "\n";
        cin >> num;
        num--;
        if(spaces[num] == ' '){
            spaces[num] = player;
            break;
        }
    }while(!num > 0 || !num < 8);
}
void computermove(char *spaces, char computer){
    int num;
    srand(time(NULL));
    while(true){
        int num = rand() % 9;
        if(spaces[num] == ' '){
            spaces[num] = computer;
            break;
        }
    }
}
bool checkwinner(char *spaces, char player, char computer){
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2] ){
        if(spaces[0] == 'X'){
            cout << "You won the game" << "\n";
        }else{
            cout << "Computer won the game" << "\n";
            cout << "You lost" << "\n";
        }
    }else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5] ){
        if(spaces[3] == 'X'){
            cout << "You won the game" << "\n";
        }else{
            cout << "Computer won the game" << "\n";
            cout << "You lost" << "\n";
        }
    }else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8] ){
        if(spaces[6] == 'X'){
            cout << "You won the game" << "\n";
        }else{
            cout << "Computer won the game" << "\n";
            cout << "You lost" << "\n";
        }
    }else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7] ){
        if(spaces[1] == 'X'){
            cout << "You won the game" << "\n";
        }else{
            cout << "Computer won the game" << "\n";
            cout << "You lost" << "\n";
        }
    }else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8] ){
        if(spaces[2] == 'X'){
            cout << "You won the game" << "\n";
        }else{
            cout << "Computer won the game" << "\n";
            cout << "You lost" << "\n";
        }
    }else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8] ){
        if(spaces[0] == 'X'){
            cout << "You won the game" << "\n";
        }else{
            cout << "Computer won the game" << "\n";
            cout << "You lost" << "\n";
        }
    }else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6] ){
        if(spaces[2] == 'X'){
            cout << "You won the game" << "\n";
        }else{
            cout << "Computer won the game" << "\n";
            cout << "You lost" << "\n";
        }
    }else{
        return false;
    }
    return true;
}
bool istie(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    cout << "TIEEE!!!" <<"\n";
    return true;
    return 0;
}
=======
#include <iostream>
#include <ctime>
using namespace std;

void drawBoard(char *spaces);
void playermove(char *spaces, char player);
void computermove(char *spaces, char computer);
bool checkwinner(char *spaces, char player, char computer);
bool istie(char *spaces);

int main(){
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);
    while(running){
        playermove(spaces, player);
        drawBoard(spaces);
        if(checkwinner(spaces, player, computer)){
            running = false;
            break;
        }else if(istie(spaces)){
            running=false;
            break;
        }
        computermove(spaces, computer);
        drawBoard(spaces);
        if(checkwinner(spaces, player, computer)){
            running = false;
            break;
        }else if(istie(spaces)){
            running=false;
            break;
        }
    }
    return 0;
}

void drawBoard(char *spaces){
    cout << "\n";
    cout << "     |     |     \n";
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "\n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "\n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "\n";
    cout << "     |     |     \n";
    cout << "\n";
}
void playermove(char *spaces, char player){
    int num;
    do{
        cout << "Enter a spot to fill the marker(1-9): " << "\n";
        cin >> num;
        num--;
        if(spaces[num] == ' '){
            spaces[num] = player;
            break;
        }
    }while(!num > 0 || !num < 8);
}
void computermove(char *spaces, char computer){
    int num;
    srand(time(NULL));
    while(true){
        int num = rand() % 9;
        if(spaces[num] == ' '){
            spaces[num] = computer;
            break;
        }
    }
}
bool checkwinner(char *spaces, char player, char computer){
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2] ){
        if(spaces[0] == 'X'){
            cout << "You won the game" << "\n";
        }else{
            cout << "Computer won the game" << "\n";
            cout << "You lost" << "\n";
        }
    }else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5] ){
        if(spaces[3] == 'X'){
            cout << "You won the game" << "\n";
        }else{
            cout << "Computer won the game" << "\n";
            cout << "You lost" << "\n";
        }
    }else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8] ){
        if(spaces[6] == 'X'){
            cout << "You won the game" << "\n";
        }else{
            cout << "Computer won the game" << "\n";
            cout << "You lost" << "\n";
        }
    }else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7] ){
        if(spaces[1] == 'X'){
            cout << "You won the game" << "\n";
        }else{
            cout << "Computer won the game" << "\n";
            cout << "You lost" << "\n";
        }
    }else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8] ){
        if(spaces[2] == 'X'){
            cout << "You won the game" << "\n";
        }else{
            cout << "Computer won the game" << "\n";
            cout << "You lost" << "\n";
        }
    }else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8] ){
        if(spaces[0] == 'X'){
            cout << "You won the game" << "\n";
        }else{
            cout << "Computer won the game" << "\n";
            cout << "You lost" << "\n";
        }
    }else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6] ){
        if(spaces[2] == 'X'){
            cout << "You won the game" << "\n";
        }else{
            cout << "Computer won the game" << "\n";
            cout << "You lost" << "\n";
        }
    }else{
        return false;
    }
    return true;
}
bool istie(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    cout << "TIEEE!!!" <<"\n";
    return true;
    return 0;
}
>>>>>>> b8255c96221b588acc587301369407d08324dcb6
