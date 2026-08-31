#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;
    file.open("new".txt); // File open or create
    file<<"Hello world"<<endl; // Give data in the file
    file.close();  // Close the file
}

// If u run this program,a new file will be created called new.txt and if u open it;
// It will contain Hello world in it