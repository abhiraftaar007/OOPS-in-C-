#include <bits/stdc++.h>
using namespace std;

/*
‘this’ pointers is a pointer to the current instance of a class.
It is used to refer to the object within its own member functions.

each object gets its own copy of data members and all objects share a single copy of member functions.

if only one copy of each member function exists and is used by multiple objects,
how are the proper data members are accessed and updated?

The compiler supplies an implicit pointer along with the names of the functions as ‘this’.
The ‘this’ pointer is passed as a hidden argument to all nonstatic member function calls
and is available as a local variable within the body of all nonstatic functions.

‘this’ pointer is not available in static member functions as static member functions can be called without any object (with class name).

situations where ‘this’ pointer is used:
1) When local variable’s name is same as member’s name
2) To return reference to the calling object - When a reference to a local object is returned,
the returned reference can be used to chain function calls on a single object.
*/

class A
{
public:
    int a;
    int x;

    A(int a)
    {
        // Assigning a of this object to
        // function argument a
        this->a = a;
    }

    // When local variable’s name is same as member’s name
    void setX(int x)
    {
        // The 'this' pointer is used to retrieve the object's x
        // hidden by the local variable 'x'
        this->x = x;
    }

    void display()
    {
        cout << this->a << '\n';
        cout << this->x << '\n';
    }
};

class Test
{
private:
    int x;
    int y;

public:
    Test(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }

    Test &setX(int a)
    {
        x = a;
        return *this;
        /*
        It returns a reference to the current object (*this).
        Returning a reference to the object allows method chaining, i.e.,
        you can call multiple functions on the same object in one statement.
        For example, you could do something like:
        obj.setX(10).setY(20);
        */
    }

    Test &setY(int b)
    {
        y = b;
        return *this;
    }

    void print() { 
        cout << "x = " << x << " y = " << y << endl; 
    }

};

int main()
{
    A ob(10);
    // ob.display();

    int x = 20;
    ob.setX(x);
    ob.display();

    Test obj1(5, 5);
    // Chained function calls.  All calls modify the same object
    // as the same object is returned by reference
    obj1.setX(100).setY(20);

    obj1.print();

    return 0;
}