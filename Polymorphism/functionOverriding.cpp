#include<bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/function-overriding-in-cpp/?ref=lbp

/*
Function overriding in C++ is termed as the redefinition of base class function in its derived class with the same signature
i.e. return type and parameters.
Function overriding is a type of polymorphism in which we redefine the member function of a class which it inherited from its base class.

The function signature remains same but the working of the function is altered to meet the needs of the derived class.
So, when we call the function using its name for the parent object, the parent class function is executed.
But when we call the function using the child object, the child class version will be executed.

Real life example -
relationship between RBI(The Reserve Bank of India) and Other state banks like SBI, PNB, ICICI, etc.
Where the RBI passes the same regulatory function and others follow it as it is.

Types of Function Overriding - 
1. Compile Time overriding
2. Runtime Overriding
*/

/*
Compile Time Overriding -
In compile time function overriding, the function call and the definition is binded at the compilation of the program.
Due to this, it is also called early binding or static binding.
*/
class Parent
{
public:
    void Print()
    {
        cout << "Base Function" << endl;
    }
};

class Child : public Parent
{
public:
    void Print()
    {
        cout << "Derived Function" << endl;
    }
};

/*
Runtime function overriding using virtual function -
function call will be binded to its definition during runtime (also known as late binding or dynamic binding). 
This can be done with the help of virtual functions.
*/
class Base
{
public:
    // Declare the function as virtual to allow overriding
    // in derived classes
    virtual void display()
    {
        cout << "Display method of Base class" << endl;
    }

    // Virtual destructor to ensure proper cleanup of
    // derived class objects
    virtual ~Base() {}
};

class Derived : public Base
{
public:
    // Override the display method
    void display() override
    {
        cout << "Display method of Derived class" << endl;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    Child d;
    d.Print();

    Base *basePtr;
    Derived derivedObj;

    // Point base class pointer to derived class object
    basePtr = &derivedObj;

    // Call the display function
    // This will call the display method of the Derived
    // class due to the virtual function mechanism
    basePtr->display();

    return 0;
}

/* Function Overloading vs Function Overriding */
// Function Overloading - 
/*
1. It falls under Compile-Time polymorphism
2. A function can be overloaded multiple times as it is resolved at Compile time
3. Can be executed without inheritance
4. They are in the same scope
*/

// Function Overriding -
/*
1. It can be both Compile Time or Runtime Polymorphism
2. A function cannot be overridden multiple times as it is resolved at Run time
3. Cannot be executed without inheritance
4. They are of different scopes.
*/