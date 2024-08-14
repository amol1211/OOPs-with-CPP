/* 
1. Objects are entities in the real world.

2. Class is like a blueprint of these entities. 

3. Method is nothing but a function written inside a class.  */

// Generic syntax

#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:     
    double salary;

public:
    // properties/attributes
    string name;
    string dept;
    string subject;

    // methods/member functions
    void changeDept(string newDept) {
        dept = newDept;
    }
    
    //setter funtion (which sets values of private attributes)
    void setSalary(double s) {
        salary = s;
    }
    
    //getter funtion (which is used to get values of private attributes)
    double getSalary() {
        return salary;
    }
};

class Student {
public:    
    string name;
    int rollno;
    int age;
};

int main() {
    Teacher t1;
    t1.name = "Amol";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.setSalary(25000);

    cout << t1.name << endl;
    cout << t1.getSalary() << "\n";

    return 0;
}

/*Access Modifiers

1. private : data & methods accessible inside class
2. public : data & methods accessible to everyone
3. protected : data & methods accessible inside class & to its derived class */
