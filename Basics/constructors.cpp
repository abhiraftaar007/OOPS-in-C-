#include <bits/stdc++.h>
using namespace std;

/*
Constructors are special class members which are called by the compiler every time an object of that class is instantiated.

Constructors have the same name as the class and may be defined inside or outside the class definition.

If the programmer does not define the constructor, the compiler automatically creates the default, copy and move constructor.

There are 4 types of constructors in C++ classes:

Default Constructors: The constructor that takes no argument is called default constructor.
Parameterized Constructors: This type of constructor takes the arguments to initialize the data members.
Copy Constructors: Copy constructor creates the object from an already existing object by copying it.
Move Constructor: The move constructor also creates the object from an already existing object but by moving it.


*/

class Person
{
public:
    int id;
    ;

    // default constructor
    Person()
    {
        cout << "Default constructor called " << endl;
        id = -1;
    }

    // Parameterized constructor
    Person(int x)
    {
        cout << "Parameterized constructor called " << endl;
        id = x;
    }
};

int main()
{
    // p1 will call default constructor
    Person p1;
    cout << "Person id is : " << p1.id << endl;

    // p2 will call parameterized constructor
    Person p2(21);
    cout << "Person id is : " << p2.id << endl;

    return 0;
}