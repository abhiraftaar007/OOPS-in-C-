#include<bits/stdc++.h>
using namespace std;

/*
2 ways to define a member function:
1. Inside class definiton
2. Outside class definition

Till now, we have defined the member function inside the class

To define a member function outside the class definition,
We have to first declare the function prototype in the class definition.
Then we have to use the scope resolution:: operator along with the class name and function name.

Note that all the member functions defined inside the class definition are by default inline,
but you can also make any non-class function inline by using the keyword inline with them.

Inline functions are actual functions,
which are copied everywhere during compilation,
like pre-processor macro, so the overhead of function calls is reduced.

Declaring a friend function is a way to give private access to a non-member function.
*/

class Person{
    public:
    string name;
    int id;

    // printname is not defined inside class definition
    void printname();

    // printid is defined inside class definition
    void printId(){
        cout << "Id: " << id;
    }
};

// Definition of printname using scope resolution operator
// ::
void Person::printname(){
    cout << "Name: " << name;
}

int main()
{
    Person p;
    p.name = "Abhi";
    p.id = 10;

    p.printname();
    cout << endl;

    p.printId();

    return 0;
}