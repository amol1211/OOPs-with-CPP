/*
Polymorphism
Polymorphism is the ability of objects to take on different forms or behave in different
ways depending on the context in which they are used.

• Compile Time Polymorphism (Static polymorphism)
   - 1. Contructor overloading

   In below case, we declare 2 constructor(Student) with same name but both the constructor behave differently depending upon the context in which they are used. This is called "Constructor overloading" which is an example of polymorphism. Constuctor overloading is an example of compile time polymorphism. 

   #include <iostream>
   #include <string>
   using namespace std;

class Student {
public:
    string name;

    Student() {
        cout << "non-parameterized constructor\n";
    } 

    Student(string name) {
        this->name = name;
        cout << "parameterized constructor\n";
    }   
};

int main() {
    Student s1; //Output : non-parameterized constructor

    Student s2("Amol"); //Output : parameterized constructor

    return 0;
}
          - 2. Function overloading

Likewise, "Function overloading" is also an example of compile time polymorphism where 2(or more) functions with same name are declared in same class but with different parameters(difference in no. of parameters or type of parameters)


#include <iostream>
#include <string>
using namespace std;

class Print {
public:
    void show(int x) {
        cout << "int : " << x << "\n";
    } 

    void show(char ch) {
        cout << "char : " << ch << "\n";
    }   
};

int main() {
    Print p1;
   // p1.show(12); Output : int : 12
   // p1.show('*'); Output : char : *

    return 0;
}


          -3. Operator overloading
Operator overloading is a compile-time polymorphism in which the operator is overloaded to provide the special meaning to the user-defined data type. Operator overloading is used to overload or redefines most of the operators available in C++. It is used to perform the operation on the user-defined data type. For example, C++ provides the ability to add the variables of the user-defined data type that is applied to the built-in data types.

The + operator, when used with values of type int, returns their sum. However, when used with objects of a user-defined type, it is an error.

In this case, we can define the behavior of the + operator to work with objects as well.

This concept of defining operators to work with objects and structure variables is known as operator overloading.

Syntax for C++ Operator Overloading
The syntax for overloading an operator is similar to that of function with the addition of the operator keyword followed by the operator symbol.

returnType operator symbol (arguments) {
    ... .. ...
} 

Here,

returnType - the return type of the function
operator - a special keyword
symbol - the operator we want to overload (+, <, -, ++, etc.)
arguments - the arguments passed to the function
*/ 
    



/*• Run Time Polymorphism (Dynamic polymorphism)

 -1. Function Overriding
Parent & Child both contain the same function with different implementation.
The parent class function is said to be overridden.

#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
    void getInfo() {
        cout << "Parent class\n";
    }    
};

class Child : public Parent {
public:
    void getInfo() {
        cout << "Child class\n";
    }    
};

int main() {
    //Child c1;
    //c1.getInfo(); //Output : Child class (function overriding)

    Parent p1;
    p1.getInfo(); //Output : Parent class
    return 0;


    -2. Virtual functions

A virtual function is a member function that you expect to be redefined in derived classes.

• Virtual functions are Dynamic in nature.
• Defined by the keyword "virtual" inside a base class and are always declared with a base
class and overridden in a child class.
• A virtual function is called during Runtime.
}
*/


#include <iostream>
using namespace std;


class Parent {
public:
      virtual void hello() {
        cout << "Hello from parent\n";
      }    
};

class Child : public Parent {
public:
       void hello() {
        cout << "Hello from child\n";
       }    
};

int main() {

    //Child c1;
    //c1.hello(); // Output : Hello from child (virtual function)

    Parent p1;
    p1.hello(); // Output : Hello from parent


    return 0;
}




