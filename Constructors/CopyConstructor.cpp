#include <bits/stdc++.h>
using namespace std;

/*
A copy constructor is a type of constructor that creates an object using another object of the same class

The process of initializing members of an object through a copy constructor is known as copy initialization

It is also called member-wise initialization because the copy constructor initializes one object with the existing object,
both belonging to the same class on a member-by-member copy basis.


*/

// Implicit Copy Constructor
class A
{
public:
    int x;
};

// User-defined Copy Constructor
class B
{
public:
    int x;

    B() {}; // If we define a copy constructor, then implicit definition of the default constructor will not be provided by the compiler.
    // So, we would have to manually define it too.

    // User defined Copy Constructor
    B(B &ob)
    {
        x = ob.x;
        cout << "Calling copy constructor" << endl;
    }
};

int main()
{
    A a1;
    a1.x = 10;

    cout << a1.x << endl;

    // Implicit Copy Constructor called
    /*
    C++ compiler by default create a simple copy constructor when it is not explicitly defined by the programmer.
    It is called implicit copy constructor,
    */
    A a2(a1);
    cout << a2.x << endl;

    B b1;
    b1.x = 20;

    cout << b1.x << endl;

    B b2(b1);
    cout << b2.x << endl;

    return 0;
}