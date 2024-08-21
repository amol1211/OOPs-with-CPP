/*
Abstraction
Hiding all unnecessary details & showing only the important parts
-Access modifiers/specifiers are ways to implement abstraction
- There are some other ways to implement abstraction such as -> using
Abstract classes are used to provide a base class from which other classes can be derived.
• They cannot be instantiated(can't make instance/objects of it) and are meant to be inherited.
• Abstract classes are typically used to define an interface for derived classes.
*/

#include <iostream>
#include <string>
using namespace std;

class Shape { // abstract class
    virtual void draw() = 0; //pure virtual function
};

class Circle : public Shape {
public: 
    void draw() {
        cout << "drawing a circle\n";
    }    
};

int main() {
    Circle c1;
    c1.draw(); //Output : drawing a circle

    return 0;
};