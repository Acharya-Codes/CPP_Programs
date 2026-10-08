<<<<<<< HEAD
#include <iostresm>
using namespace std;

class Student{
    public:
        string name;
        int age;
        float gpa;

        Student(string name,int age,float gpa){
            this->name = name;
            this->age = age;
            this->gpa = gpa;
        }
};

int main() {
    Student s1("Acharya,17,9.12");
    cout << s1.name << "\n";
    return 0;
=======
#include <iostresm>
using namespace std;

class Student{
    public:
        string name;
        int age;
        float gpa;

        Student(string name,int age,float gpa){
            this->name = name;
            this->age = age;
            this->gpa = gpa;
        }
};

int main() {
    Student s1("Acharya,17,9.12");
    cout << s1.name << "\n";
    return 0;
>>>>>>> b8255c96221b588acc587301369407d08324dcb6
}