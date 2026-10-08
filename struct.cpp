<<<<<<< HEAD
#include <iostream>
using namespace std;
struct Student{
    string name;
    int age;
    float gpa;
}
struct Car{
    string carname;
    int year;
    string colour;
}
void printCars(Cars &car);

int main(){
    Student s1;
    s1.name = "Acharya";
    s1.age = 17;
    s1.gpa = 9.l2;
    Student s2;
    s2.name = "Siddhesh";
    s2.age = 17;
    s2.gpa = 9.11;

    cout << s1.age << "\n";
    cout << s2.gpa << "\n";

    Car c1;
    Car c2;

    c1.carname = "Waganor";
    c1.year = 2014;
    c1.colour = "Blue";
    
    c2.carname = "Swift Dzire";
    c2.year = 2016;
    c1.colour = "Silver";

    printCars(car1);
    cout << "\n";
    printCars(car2);

    return 0;
}
void printCars(Cars &car){
    cout << car.carname << "\n";
    cout << car.year << "\n";
    cout << car.colour << "\n";
=======
#include <iostream>
using namespace std;
struct Student{
    string name;
    int age;
    float gpa;
}
struct Car{
    string carname;
    int year;
    string colour;
}
void printCars(Cars &car);

int main(){
    Student s1;
    s1.name = "Acharya";
    s1.age = 17;
    s1.gpa = 9.l2;
    Student s2;
    s2.name = "Siddhesh";
    s2.age = 17;
    s2.gpa = 9.11;

    cout << s1.age << "\n";
    cout << s2.gpa << "\n";

    Car c1;
    Car c2;

    c1.carname = "Waganor";
    c1.year = 2014;
    c1.colour = "Blue";
    
    c2.carname = "Swift Dzire";
    c2.year = 2016;
    c1.colour = "Silver";

    printCars(car1);
    cout << "\n";
    printCars(car2);

    return 0;
}
void printCars(Cars &car){
    cout << car.carname << "\n";
    cout << car.year << "\n";
    cout << car.colour << "\n";
>>>>>>> b8255c96221b588acc587301369407d08324dcb6
}