#include <iostream>
using namespace std;

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main() {
    int x =0;
    cout << first::x << "\n";
    cout << second::x << "\n";
    cout << x << "\n";
    return 0;
}
// Namespace helps us to use same variable name multiple times!