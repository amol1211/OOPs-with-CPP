/* 
• Shallow & Deep Copy
A shallow copy of an object copies all of the member values from one object to another.
A deep copy, on the other hand, not only copies the member values but also makes copies of any dynamically allocated memory ( e.g.variable declared with "new" keyword) that the members point to. */


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

    //Custom copy constructor (shallow copy)
   /*  Student(Student &obj) {
        this->name = obj.name;
        //this->cgpa = obj.cgpa;
        this->cgpaPtr = obj.cgpaPtr;
    } */

   //Deep copy 
   Student(Student &obj) {
    this->name = obj.name;
    cgpaPtr = new double;
    *cgpaPtr = *obj.cgpaPtr;
   } 

    void getInfo() {
        cout << "name : " << name << "\n";
        //cout << "cgpa : " << cgpa << "\n";
        cout << "cgpa : " << *cgpaPtr << "\n";
    }   
};


int main() {
    Student s1("Amol Shinde", 8.9);
    //s1.getInfo();

    Student s2(s1); // default copy constructor invoked
    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();
    
    /*In above case  we just changed s2's cgpa so output should show only s1's cgpa as we declared earlier that is 8.9 , however it makes changes in s1's cgpa as well due to shallow copy. This is the problem we face in shallow copy. 
    Output : name : Amol Shinde
             cgpa : 8.9
             name : Amol Shinde
             cgpa : 9.2*/

    s2.getInfo();
    s2.name = "Varsha";
    s2.getInfo();
    /*Deep copy initially assign same value to new obj's property(cgpa) as that of previous obj but with new address.
    Output : name : Amol Shinde
             cgpa : 8.9
             name : Amol Shinde
             cgpa : 8.9
             name : Amol Shinde
             cgpa : 9.2
             name : Varsha
             cgpa : 9.2*/
    return 0;
}