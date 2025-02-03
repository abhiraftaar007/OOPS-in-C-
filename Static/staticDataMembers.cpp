#include <bits/stdc++.h>
using namespace std;

/*
Static data members are class members that are declared using static keywords

A static member has certain special characteristics which are as follows:
1. Only one copy of that member is created for the entire class and is shared by all the objects of that class,
no matter how many objects are created.
2. It is initialized before any object of this class is created, even before the main starts outside the class itself.
3. It is visible can be controlled with the class access specifiers.
4. Its lifetime is the entire program.

Static data members are useful for maintaining data shared among all instances of a class.
the static members are only declared in the class declaration.

To access the static data member of any class we have to define it first and static data members are defined outside the class definition.
The only exception to this are static const data members of integral type which can be initialized in the class declaration.

The static data members are initialized at compile time so the definition of static members should be present before the compilation of the program

The access to the static data member can be controlled by the class access modifiers.
*/

/*
Accessing a Static Member -
We can access the static data member without creating the instance of the class.

There are 2 ways of accessing static data members:
1. Accessing static data member using Class Name and Scope Resolution Operator,
when there are no instances/objects of the class present in the scope.
Syntax
Class_Name :: var_name
Example
A::x

2. Accessing static data member through Objects
We can also access the static data member using the objects of the class using dot operator.
Syntax
object_name . var_name
Example
obj.x

*/

class A
{
public:
    // static data member here
    static int x;
    A()
    {
        cout << "A's constructor called " << endl;
    }
};

// we cannot initialize the static data member inside the
// class due to class rules and the fact that we cannot
// assign it a value using constructor
int A::x = 2; // datatype class_name::var_name = value...;

int main()
{
    // accessing the static data member using scope
    // resultion operator
    cout << "Accessing static data member: " << A::x
         << endl;
    return 0;
}