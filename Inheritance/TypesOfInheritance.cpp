//There are 5 types of inheritance
// 1. Single inheritance -Single Inheritance is the most primitive among all the types of inheritance in C++. In this inheritance, a single class inherits the properties of a base class. All the data members of the base class are accessed by the derived class according to the visibility mode (i.e., private, protected, and public) that is specified during the inheritance.

/*#include <iostream>

using namespace std;

// base class 

class electronicDevice

{

public:

    // constructor of the base class 

    electronicDevice()

    {

        cout << "I am an electronic device.\n\n";

    }

};

 // derived class

class Computer: public electronicDevice

{

public:

    // constructor of the derived class

    Computer()

    {

        cout << "I am a computer.\n\n";

    }

};

int main()

{

    // create object of the derived class

    Computer obj; // constructor of base class and

                  // derived class will be called

    return 0;

}

*/

// 2. Multiple inheritance -The inheritance in which a class can inherit or derive the characteristics of multiple classes, or a derived class can have over one base class, is known as Multiple Inheritance. It specifies access specifiers separately for all the base classes at the time of inheritance. The derived class can derive the joint features of all these classes and the data members of all the base classes are accessed by the derived or child class according to the access specifiers. 

/*
multiple inheritance- where a subclass can inherit from two or more superclasses.
e.g.
    class Student {
public:
    string name;
    int rollno;    
};
    class Teacher {
public:
    string subject;
    double salary;    
};

class TA : public Student, public Teacher {
    
};

    int main() {
    TA t1;
    t1.name = "Amol";
    t1.subject = "oop";

    cout << t1.name << "\n";
    cout << t1.subject << "\n";

    return 0;
}
*/

/*
3. Multilevel Inheritance
The inheritance in which a class can be derived from another derived class is known as Multilevel Inheritance. Suppose there are three classes A, B, and C. A is the base class that derives from class B. So, B is the derived class of A. Now, C is the class that is derived from class B. This makes class B, the base class for class C but is the derived class of class A. This scenario is known as the Multilevel Inheritance. The data members of each respective base class are accessed by their respective derived classes according to the specified visibility modes.
*/

//e.g

#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;    
};

class Student : public Person {
public:
    int rollno;    
};

class PostGradStudent : public Student {
public:
    string researchArea;    

    void getInfo() {
        cout << "name : " << name << "\n";
        cout << "age : " << age << "\n";
        cout << "rollno : " << rollno << "\n";
        cout << "researchArea : " << researchArea << "\n";
    }
};

int main() {
    PostGradStudent s1;
    s1.name = "Amol";
    s1.age = 21;
    s1.rollno = 9;
    s1.researchArea = "Quantum Computing";

    s1.getInfo();
    return 0;
}

/*Hierarchical Inheritance
The inheritance in which a single base class inherits multiple derived classes is known as the Hierarchical Inheritance. This inheritance has a tree-like structure since every class acts as a base class for one or more child classes. The visibility mode for each derived class is specified separately during the inheritance and it accesses the data members accordingly.*/

/*Description
The subclasses class_B and class_C inherit the attributes of the base class class_A. Further, these two subclasses are inherited by other subclasses class_D and class_E respectively.

Example
The following example illustrates Hierarchical Inheritance in C++:

#include <iostream>

using namespace std;

// base class

class electronicDevice

{

public:

    // constructor of the base class 1

    electronicDevice()

    {

        cout << "I am an electronic device.\n\n";

    }

};

// derived class inheriting base class

class Computer: public electronicDevice

{}; 

// derived class inheriting base class

class Linux_based : public electronicDevice

{}; 

int main()

{

    // create object of the derived classes 

    Computer obj1;     // constructor of base class will be called

    Linux_based obj2;  // constructor of base class will be called 

    return 0;

}*/

/*5.Hybrid Inheritance
Hybrid Inheritance, as the name suggests, is the combination of two or over two types of inheritances. For example, the classes in a program are in such an arrangement that they show both single inheritance and hierarchical inheritance at the same time. Such an arrangement is known as the Hybrid Inheritance. This is arguably the most complex inheritance among all the types of inheritance in C++. The data members of the base class will be accessed according to the specified visibility mode.*/

/*Description
The derived class class_C inherits two base classes that are, class_A and class_B. This is the structure of Multiple Inheritance. And two subclasses class_D and class_E, further inherit class_C. This is the structure of Hierarchical Inheritance. The overall structure of Hybrid Inheritance includes more than one type of inheritance.

Example
The following example illustrates the Hybrid Inheritance in C++:

#include <iostream>

using namespace std;

// base class 1

class electronicDevice

{

public:

    // constructor of the base class 1

    electronicDevice()

    {

        cout << "I am an electronic device.\n\n";

    }

};

// base class 2

class Computer

{

public:

    // constructor of the base class 2

    Computer()

    {

        cout << "I am a computer.\n\n";

    }

};

// derived class 1 inheriting base class 1 and base class 2

class Linux_based : public electronicDevice, public Computer

{};

// derived class 2 inheriting derived class 1

class Debian: public Linux_based

{}; 

int

main()

{

    // create an object of the derived class

    Debian obj; // constructor of base classes and

                // derived class will be called 

    return 0;

}*/