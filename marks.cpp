#include <iostream>
using namespace std;

class Marks{
    public:
    int marks=0;
    Marks(int m) {
        marks = m;
    }
    Marks operator+ (Marks m){
        Marks temp(0);
        temp.marks = marks + m.marks;
        return temp;
    }
};
int main() {
    Marks m1(80);
    Marks m2(90);
    Marks m3 = m1 + m2;
    cout << "The value is: " << m3.marks << endl;
    return 0;
}

// Step 10 to 14 is very important as C++ doesnt understand + operator normally so we are telling it what is +