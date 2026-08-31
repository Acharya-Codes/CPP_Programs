#include <iostream>
using namespace std;
class Pizza{
    public:
        string topping1;
        string topping2;
        pizza(){

        }
    pizza(string topping1){
        this->topping1 = topping1;
    }
    pizza(string topping1, string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
}
int main() {
    Pizza pizza1;
    Pizza pizza2("pepporoni");
    Pizza pizza3("mushrooms","pepper");
    return 0;
} // We can use the same name for the constructor but it should have different set of parameters!!