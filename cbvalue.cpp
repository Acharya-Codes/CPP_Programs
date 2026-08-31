#include <iostream>
using namespace std;

void changemark(int mark) {
    mark = 100;
    cout << "Inside the function value: "<<mark<<endl;
}
int main() {
int studentmarks = 60;
    changemark(studentmarks);
    cout << "Outside the function value: " ,, studentmarks << endl;
}
    