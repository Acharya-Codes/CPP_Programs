#include <iostream>
using namespace std;
template <typename T, typename U>
auto max(T x, T y){
    return (x > y) ? x : y;
}
int main(){
    cout << max(1,2) << "\n";
    return
}
// This template can act as int or string or char or double and many more!!
// The auto keyword will deduce what datatype it is and will return it!!
// typename T, typename U --> This means that we can enter upto 2 different datatypes in the function!!