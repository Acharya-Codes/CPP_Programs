<<<<<<< HEAD
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
=======
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
>>>>>>> b8255c96221b588acc587301369407d08324dcb6
// Namespace helps us to use same variable name multiple times!