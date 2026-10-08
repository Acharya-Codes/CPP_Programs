<<<<<<< HEAD
#include <iostream>
using namespace std;

class Calculator{
public:

int add(int a,int b);
  return a+b;

int add(int a,int b,int c);
  return a+b+c;

int add(int a);
  return a;
};
int main() {
    Calculator calc;

    cout << "Sum of 6 and 9: " << calc.add(2,3) << endl;
    cout << "Sum of 3 and 6 and 9 is: " << calc.add(3,6,9) << endl;
    cout << "Sum of 9 is: " << calc.add(9) << endl;

    return 0;
}

// This is called METHOD OVERLOADING concept
=======
#include <iostream>
using namespace std;

class Calculator{
public:

int add(int a,int b);
  return a+b;

int add(int a,int b,int c);
  return a+b+c;

int add(int a);
  return a;
};
int main() {
    Calculator calc;

    cout << "Sum of 6 and 9: " << calc.add(2,3) << endl;
    cout << "Sum of 3 and 6 and 9 is: " << calc.add(3,6,9) << endl;
    cout << "Sum of 9 is: " << calc.add(9) << endl;

    return 0;
}

// This is called METHOD OVERLOADING concept
>>>>>>> b8255c96221b588acc587301369407d08324dcb6
