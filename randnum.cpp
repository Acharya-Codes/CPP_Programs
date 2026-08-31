#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand = (time(NULL));
    int num = (rand() % 6) + 1; // This can be used to generate a random number between 1 to 6
    cout << num << "\n";
    return 0;
}