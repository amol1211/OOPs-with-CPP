/*Inheritance
When properties & member functions of base class are passed on to the derived class.

In constructor, base class gets derived first and in constructor child class gets deleted first.
Output : Parent constructor..
         Child constructor..
         name : Amol
         age : 21
         rollno : 9
         Child destructor..
         Parent destructor..
*/

#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }   

   /* Person() {
    cout << "Parent constructor..\n";
   } 

   ~Person() {
    cout << "Parent destructor..\n";
   } */
};

class Student : public Person {
    //name, age, rollno
public:
    int rollno; 

    //This constructor is built just to prove derived class(person in this case) 
    //properties/objects gets printed(passed on) first.

    Student(string name, int age, int rollno) : Person(name, age) {
       // cout << "Child constructor..\n";

       this->rollno = rollno;
    }

   /*  ~Student() {
    cout << "Child destructor..\n";
   } */
 
    void getInfo() {
        cout << "name : " << name << "\n";
        cout << "age : " << age << "\n";
        cout << "rollno : " << rollno << "\n";
    }
};



int main() {
    Student s1("Amol", 21, 9);
    /* s1.name = "Amol";
    s1.age = 21;
    s1.rollno = 9; */

    s1.getInfo();
    return 0; 
}


//Mode of Inheritance
/*
_____________________________________________________________
|           |               |                |               | 
|           | Derived Class | Derived Class  | Derived Class |
|___________|_______________|________________|_______________|
|Base Class | Private Mode  | Protected Mode | Public Mode   | 
|___________|_______________|________________|_______________|
|Private    | Not Inherited | Not Inherited  | Not Inherited |
|___________|_______________|________________|_______________|
|Protected  | Private       | Protected      | Protected     |
|___________|_______________|________________|_______________|
|Public     | Private       | Protected      | Public        |
|___________|_______________|________________|_______________|

*/