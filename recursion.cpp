#include <iostream>
using namespace std;
int factorial(int num);
int main() {
    cout << factorial(10);
    return 0;
}
int factorial(int num){
    if(num > 1){
        return result * factorial(num-1);
    }else{
        return 1;
    }
} // This recursion method is slower and takes up more memory!!!