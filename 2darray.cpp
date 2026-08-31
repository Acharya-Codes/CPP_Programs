#include <iostream>
using namespace std;
int main() {
    string cars[][3] = {{"Name","Age","Grade"},{"Acharya",17,'A'},{"Siddhesh",17,'B'},{"Kavi",17,'C'}};
    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars) / sizeof(cars[0][0]);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << cars[i][j] << " ";
        }
    }
    cout << "\n";
    return 0;
}