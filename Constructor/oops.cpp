/*
Constructor is special method invoked automatically at time of object creation. Used for Initialisation.

• Same name as class
• Constructor doesn't have a return type
• Only called once (automatically), at object creation
• Memory allocation happens when constructor is called
• We always declare constructor publicly.
• There are total 3 types of constructor :
1. Non-parameterized contructor
2. Parameterized contructor
3. Copy contructor

• There can be multiple constructor with same name but with different types. This phenomenon is called "constructor overloading" and is an example of polymorphism.

• this is a special pointer in C++ that points to the current object.
this->prop is same as *(this).prop

• Copy Constructor is a Special Constructor (default) used to copy properties of one object into another.


*/

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
    
    //Non-parameterized contructor
/*     Teacher() {
        //cout << "Hi, I'm constructor!"
        //we can also initialize properties in constructor itself so that we don't have to set values everytime we create new object
        dept = "Computer Science";
    } */
    
    //Parameterized contructor
/*     Teacher(string n, string d, string s, double sal) {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    } */
    
    //this pointer
    Teacher(string name, string dept, string subject, double salary) {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    //custom copy constructor
    Teacher(Teacher &orgObj) {
        cout << "I am custom copy constructor...\n";
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    // methods/member functions
    void changeDept(string newDept) {
        dept = newDept;
    }
    
    void getInfo() {
        cout << "name: " << name << "\n"; 
        cout << "subject: " << subject << "\n"; 
    }
};

class Student {
public:    
    string name;
    int rollno;
    int age;
};

int main() {
    /* Teacher t1; //Constructor call
    Teacher t2; //Constructor call
    t1.name = "Amol";
    t1.subject = "C++";
    t1.setSalary(25000); */
    
    /* cout << t1.dept << endl; */

    Teacher t1("Amol", "ComputerScience", "oops", 25000);
    
   // t1.getInfo();

  // Teacher t2(t1);  default copy constructor invoked
  
  Teacher t2(t1);
   t2.getInfo();

    return 0;
}


