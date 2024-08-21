/*
Static Keyword
• Static Variables
-1. Variables declared as static in a function are created & initialised once for the lifetime of the
program. //in Function

#include <iostream>
#include <string>
using namespace std;

void fun() {
    //int x = 0; //every time we run fun function it will print "0" as output as 
    //function are created & initialised every time we invoke it.
    //
    static int x = 0; //now function will print output as 0, 1 and 2 respectively as
    //variables declared as static in a function are created & initialised once for the lifetime of the program.
    cout << "x : "<< x << endl;
    x++;
}

int main() {
    fun();
fun();
fun();
return 0;
}


-2. Static variables in a class are created & initialised once. They are shared by all the
objects of the class. //in Class

#include <iostream>
#include <string>
using namespace std;

class A {
public:
    int x;

    void incX() {
        x = x + 1;
    }
};

int main() {
    /* 
    A obj;
    obj.x = 0;
    cout << obj.x << endl;
    obj.incX();
    cout << obj.x << endl; // Output : 0, 1 */
/*
    A obj1;
    A obj2;

    obj1.x = 100;
    obj2.x = 200;

    cout << obj1.x << endl; // Output : 100
    cout << obj2.x << endl; // Output : 200


    return 0;
}
*/


//• Static Objects

/*
Static is a type of method in which we can create the variable, object, and function; then, we can allocate some space for these functions in the programming language for the complete lifetime of a program. Once we can use the static with a method or variable, then it is impossible to modify it again. */

#include <iostream>
#include <string>
using namespace std;

class ABC {
public:
    ABC () {
        cout << "constructor\n";
    }

    ~ABC() {
        cout << "destructor\n";
    }
};

int main() {

    /* if(true) {
        ABC obj;
    } */ //constructor
      //destructor
      //end of main function

      if(true) {
        static ABC obj;
      }
      /*constructor
        end of main function
        destructor*/
    //meaning every object we create with static keyword will run for lifetime of program.

    cout << "end of main function\n";
    return 0;
}