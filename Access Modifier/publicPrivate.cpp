#include<bits/stdc++.h>
using namespace std;

/*
Access modifiers are used to implement an important aspect of Object-Oriented Programming known as Data Hiding.

Access Modifiers or Access Specifiers in a class are used to assign the accessibility to the class members,
i.e., they set some restrictions on the class members so that they can’t be directly accessed by the outside functions.

There are 3 types of access modifiers available in C++:
Public
Private
Protected

If we do not specify any access modifiers for the members inside the class, 
then by default the access modifier for the members will be Private.
*/

/*
Public -
All the class members declared under the public specifier will be available to everyone

data members and member functions declared as public can be accessed by other classes and functions too.

public members of a class can be accessed from anywhere in the program using the direct member access operator (.) with the object of that class.
*/

/*
Private -
The class members declared as private can be accessed only by the member functions inside the class.

They are not allowed to be accessed directly by any object or function outside the class.

Only the member functions or the friend functions/ friend class are allowed to access the private data members of the class.

we can access the private data members of a class indirectly using the public member functions of the class.
*/

class Circle{
    // private data member
    private:
    double radius;

    // public member function
    public:
    double compute_area(double r)
    {
        // member function can access private data member radius
        radius = r;
        return 3.14*radius*radius;
    }
};

int main()
{
    Circle ob;

    // accessing public datamember outside class
    // ob.radius = 5.5; compilation error

    // cout << "Radius is: " << ob.radius << "\n"; error
    cout << "Area is: " << ob.compute_area(5.5);

    return 0;
}