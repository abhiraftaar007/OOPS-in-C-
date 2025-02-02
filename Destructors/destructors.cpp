#include<bits/stdc++.h>
using namespace std;

/*
Destructor is an instance member function that is invoked automatically whenever an object is going to be destroyed.

destructor is the last function that is going to be called before an object is destroyed.

Destructor destroys the class objects created by the constructor.

Destructor has the same name as their class name preceded by a tilde (~) symbol.

It is not possible to define more than one destructor.

The destructor is only one way to destroy the object created by the constructor. Hence, destructor cannot be overloaded.

It cannot be declared static or const.

Destructor neither requires any argument nor returns any value.

It is automatically called when an object goes out of scope.

Destructor release memory space occupied by the objects created by the constructor.

if the object is created by using new or the constructor uses new to allocate memory that resides in the heap memory or the free store,
the destructor should use delete to free the memory.

In destructor, objects are destroyed in the reverse of an object creation.

*/

// It is static so that every class object has the same
// value
static int Count = 0;

class Test{
    public:
    // user defined constructor
    Test(){
        // cout << "\n Constructor Executed";
        Count++;
        cout << "No. of Object created: " << Count << endl;
    }

    // user defined Destructor
    ~Test(){
        // cout << "\n Destructor executed";
        cout << "No. of Object destroyed: " << Count << endl;
        Count--;

        // Number of times destructor is called
    }
};

int main()
{
    Test t1, t2, t3, t4;

    return 0;
}

/*

When is the destructor called?
It is called when -
1. function ends
2. program ends
3. When a block containing local variables ends
4. when a delete operator is called

How to call destructors explicitly?
Destructor can also be called explicitly for an object.
We can call the destructors explicitly using the following statement:
object_name.~class_name()

When do we need to write a user defined destructor?
If we do not write our own destructor in class, the compiler creates a default destructor for us.
The default destructor works fine unless we have dynamically allocated memory or pointer in class.
When a class contains a pointer to memory allocated in the class, we should write a destructor to release memory before the class instance is destroyed.
This must be done to avoid memory leaks.
*/