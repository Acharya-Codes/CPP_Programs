#include <iostream>
using namespace std;


   class Students{
   private:
        int marks = 0;
        public:
        void setmarks() {
            marks = 90;
        }
        void getmarks() {
            cout << marks <<endl;
        };
   };
   
    int main() {
        Students s1;
        s1.setmarks();
        s1.getmarks();
    }    
