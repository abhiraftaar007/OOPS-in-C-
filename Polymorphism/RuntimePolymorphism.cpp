#include <bits/stdc++.h>
using namespace std;

/*
Runtime Polymorphism -
This type of polymorphism is achieved by Function Overriding.
Late binding and dynamic polymorphism are other names for runtime polymorphism.

The function call is resolved at runtime in runtime polymorphism
In contrast, with compile time polymorphism, the compiler determines which function call to bind to the object after deducing it at runtime.
*/

/*
Function Overriding -
Function Overriding occurs when a derived class has a definition for one of the member functions of the base class.
That base function is said to be overridden.

*/

class Parent
{
public:
    void Hello()
    {
        cout << "Hello parent" << endl;
    }
};

class Child : public Parent
{
public:
    void Hello()
    {
        cout << "Hello Child" << endl;
    }
};

/* Runtime Polymorphism with Data Members -
Runtime Polymorphism cannot be achieved by data members in C++
we are accessing the field by reference variable of parent class which refers to the instance of the derived class. */
class Animal
{
public:
    string color = "Black";
};

class Dog : public Animal
{
public:
    string color = "Grey";
};

/*
Virtual Function -
A virtual function is a member function that is declared in the base class using the keyword virtual
and is re-defined (Overridden) in the derived class.

Virtual functions are Dynamic in nature.

They are defined by inserting the keyword “virtual” inside a base class
and are always declared with a base class and overridden in a child class.

A virtual function is called during Runtime

*/
class A
{
public:
    virtual void display()
    {
        cout << "called virtual base class display function" << endl;
    }
    void print()
    {
        cout << "called base class print function" << endl;
    }
};

class B : public A
{
public:
    void display()
    {
        cout << "called child class display function" << endl;
    }
    void print()
    {
        cout << "called child class print function" << endl;
    }
};

class basee
{
public:
    virtual void print()
    {
        cout << "print base class" << endl;
    }

    void show() { cout << "show base class" << endl; }
};

class derivedd : public basee
{
public:
    // print () is already virtual function in
    // derived class, we could also declared as
    // virtual void print () explicitly
    void print() { cout << "print derived class" << endl; }

    void show() { cout << "show derived class" << endl; }
};

int main()
{
    Child child_derived;
    child_derived.Hello();

    Animal d = Dog();
    cout << d.color << '\n'; // We can see that the parent class reference will always refer to the data member of the parent class.

    // create a reference of class A
    A* base;
    B child;
    base = &child;

    // This will call the virtual function
    base->display();
    // This will call the non-virtual function
    base->print();

    basee *bptr;
    derivedd dd;
    bptr = &dd;

    // Virtual function, binded at
    // runtime (Runtime polymorphism)
    bptr->print();

    // Non-virtual function, binded
    // at compile time
    bptr->show();
    
    return 0;
}