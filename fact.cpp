<<<<<<< HEAD
#include <iostream>
using namespace std;

int fact(int n) {
    if(n == 1) {
        return 1;
    } else {
        return n*fact(n-1);
    }
};
int main() {
    int num = 5;
    int results = fact(num);
    cout << "The factorial of " << num << " is! " << fact(num) << endl;

    return 0;
}

// Callback function
  // function b() {}
  // function a{
   // b();
   // }
   //  Whenever function a is called function b will run!

   // Recursion
    // function a() {
    // a();
    // }
=======
#include <iostream>
using namespace std;

int fact(int n) {
    if(n == 1) {
        return 1;
    } else {
        return n*fact(n-1);
    }
};
int main() {
    int num = 5;
    int results = fact(num);
    cout << "The factorial of " << num << " is! " << fact(num) << endl;

    return 0;
}

// Callback function
  // function b() {}
  // function a{
   // b();
   // }
   //  Whenever function a is called function b will run!

   // Recursion
    // function a() {
    // a();
    // }
>>>>>>> b8255c96221b588acc587301369407d08324dcb6
    // The same function calling itself