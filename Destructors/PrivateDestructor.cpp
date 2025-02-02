#include <bits/stdc++.h>
using namespace std;

/*
Destructors with the access modifier as private are known as Private Destructors.

Whenever we want to prevent the destruction of an object, we can make the destructor private.

when a class has a private destructor, only dynamic objects of that class can be created.



*/

class Test
{
private:
    ~Test() {};

public:
    friend void destructTest(Test *);

    void destruct(){
        delete this;
        cout << "Destructor called way 2" << '\n';
    }
};

// Only this function can destruct objects of Test
void destructTest(Test *ptr)
{
    delete ptr;
    cout << "Destructor called way 1" << '\n';
}

int main()
{
    // Test t; // program fails in the compilation.
    // The compiler notices that the local variable ‘t’ cannot be destructed because the destructor is private.

    Test *t = new Test;
    /*
    When something is created using dynamic memory allocation, it is the programmer’s responsibility to delete it.
    So compiler doesn’t bother.
    */

    // delete t; // program fails in the compilation.When we call delete, destructor is called

    /*
    Following is a way to create classes with private destructors and have a function as a friend of the class.
    The function can only delete the objects.
    */

    // destruct the object
    destructTest(t);

    // Another way to use private destructors is by using the class instance method.
    Test *p = new Test;
    p->destruct();

    return 0;
}