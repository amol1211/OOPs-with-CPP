//Encapsulation is wrapping up of data & member functions in a single unit called class.
//It helps in hiding sensitive information(by using "private" access modifier).

#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    //Data hiding
    double balance;
    string password;

public:
    long accountId;
    string username;
};

int main() {

    return 0;
}

