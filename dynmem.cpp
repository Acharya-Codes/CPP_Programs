#include <iostream>
using namespace std;
int main(){
    char *pGrades = NULL;
    int size;
    cout << "How many grades do u wanna enter: " << "\n";
    cin >> size;

    for(int i = 0; i < size; i++){
        cout << "Enter the #" << i+1 << " grade: " << "\n";
        cin >> pGrades[i];
    }
    for(int i = 0; i < size; i++){
        cout << pGrades[i] << "\n";
    }
    delete[] pGrades;  // To prevent any memory leaks!!
    return 0;
}