<<<<<<< HEAD
#include <iostream>
using namespace std;
int main(){
    int *pointers = nullptr;
    int x =123;
    pointers = &x;
    if(pointers == nullptr){
        cout << "Address was not designated" << "\n";
    }else{
        cout << "Address was designated" << "\n";
        cout << *pointers;
    }
    return 0;
=======
#include <iostream>
using namespace std;
int main(){
    int *pointers = nullptr;
    int x =123;
    pointers = &x;
    if(pointers == nullptr){
        cout << "Address was not designated" << "\n";
    }else{
        cout << "Address was designated" << "\n";
        cout << *pointers;
    }
    return 0;
>>>>>>> b8255c96221b588acc587301369407d08324dcb6
}