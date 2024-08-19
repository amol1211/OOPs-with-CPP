// Destructor deletes (deallocate memory) after main function.
// Statically allocated memory gets deleted automatically after main function.
// And dynamically allocated memory doesn't delete pointer but clears/frees memory pointer pointing to.
//We use "delete" keyword to delete the dynamically allocated memory

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    //double cgpa;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        //this->cgpa = cgpa;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    //Destructor
    ~Student() {
        cout << "Hi, I delete everything! \n";
        delete cgpaPtr;
    }


    void getInfo() {
        cout << "name : " << name << "\n";    
        cout << "cgpa : " << *cgpaPtr << "\n";
    }   
};


int main() {
    Student s1("Amol Shinde", 8.9);
    s1.getInfo();
    return 0;
}