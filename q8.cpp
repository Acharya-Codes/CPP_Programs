#include <iostream>
using namespace std;
int main(){
    string questions[] = {"1. What is the capital of Australia?",
    "2. Which planet is known as the Red Planet?",
    "3. Who wrote 'Romeo and Juliet'?",
    "4. Which is the largest ocean on Earth?",
    "5. What is the chemical symbol for Gold?"};

    string choice[][4] = {{"A. Sydney", "B. Melbourne", "C. Canberra", "D. Perth"},
    {"A. Venus", "B. Mars", "C. Jupiter", "D. Saturn"},
    {"A. Charles Dickens", "B. William Shakespeare", "C. Mark Twain", "D. Jane Austen"},
    {"A. Atlantic Ocean", "B. Indian Ocean", "C. Arctic Ocean", "D. Pacific Ocean"},
    {"A. Ag", "B. Au", "C. Gd", "D. Go"}};

    char answers[] = {'C',
                      'B',
                      'B',
                      'D',
                      'B'};
    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;
    cout << "---Welcome to Aachi's quizz game---" << "\n";
    for(int i = 0; i < size; i++){
        cout << questions[i] << "\n";
        for(int j = 0; j < sizeof(choice[j]) / sizeof(choice[j][0]); j++){
            cout << choice[i][j] << "\n";
        }
        cout << "Enter you guess(A/B/C/D): " << "\n";
        cin >> guess;
        guess = toupper(guess);
        if(guess == answers[i]){
            cout << "Correct answer!" << "\n";
            score++;
        }else{
            cout << "Wrong answer!" << "\n";
            cout << "The correct answer is: " << answers[i] << "\n";
        }
    }
    cout << "---Game has been finished!---" << "\n";
    cout << "Your score is: " << score << "\n";
    cout << "Thank you for playing!";

    return 0;
}