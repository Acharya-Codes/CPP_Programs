<<<<<<< HEAD
#include <iostream>
using namespace std;

int size = sizeof(prices) / sizeof(prices[0]);
float getTotal(float prices, int size);
int main() {
    float prices[] = {20.04 , 89.99 , 69.42};
    int size = sizeof(prices) / sizeof(prices[0]);
    float total = getTotal(prices,size);
    return 0;
}
float getTotal(float prices, int size){
    float total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}
=======
#include <iostream>
using namespace std;

int size = sizeof(prices) / sizeof(prices[0]);
float getTotal(float prices, int size);
int main() {
    float prices[] = {20.04 , 89.99 , 69.42};
    int size = sizeof(prices) / sizeof(prices[0]);
    float total = getTotal(prices,size);
    return 0;
}
float getTotal(float prices, int size){
    float total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}
>>>>>>> b8255c96221b588acc587301369407d08324dcb6
// We cant use normal for loops as if we enter the functions it will identify them as pointers!