#include <iostream>
using namespace std;

class Animal{
    public:
        bool alive = true;
    void eat(){
        cout << "This animal is eating" << "\n";
    }
};
class Dog : public Animal{
    public:
        void speak(){
            cout << "This animal is speaking" << "\n";
        }
};

int main(){
    Dog d1;
    cout << d1.alive << "\n";
    d1.eat();
    d1.speak();
    return 0;
}