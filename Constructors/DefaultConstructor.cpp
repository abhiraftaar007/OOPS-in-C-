#include <bits/stdc++.h>
using namespace std;

/*
A default constructor is a constructor that either takes no arguments or has default values for all its parameters

It is also referred to as a zero-argument constructor when it explicitly accepts no arguments.

If a default constructor is not explicitly defined by the programmer in the source code, the compiler automatically generates one during the compilation process.

However, if a programmer explicitly defines a default constructor, the compiler does not generate it.


*/

class Base
{
public:
    // Compiler "declares" constructor
};

class A
{
public:
    // user defined constructor
    A()
    {
        cout << "A constructor" << endl;
    }

    // uninitialized
    int size;
};

class B : public A
{
    // Compiler defines default constructor of B,
    // and inserts stub to call A constructor
    // Compiler won't initialize any data of A
};

class C : public A
{
public:
    C()
    {
        // User defined default constructor of C
        // Compiler inserts stub to call A's constructor
        cout << "C Constructor" << endl;

        // Compiler won't initialize any data of A
    }
};

class D
{
    A a;

public:
    D()
    {
        // User defined default constructor of D
        // a - constructor to be called, compiler inserts
        // stub to call A constructor
        cout << "D Constructor" << endl;

        // Compiler won't initialize any data of 'a'
    }
};

// Constructor and Default Arguments
class DefaultArg
{
public:
    int sum = 0;

    DefaultArg() {}; // default constructor with no argument
    DefaultArg(int a, int x = 0)
    {
        sum = a + x;
    }

    void print()
    {
        cout << "Sum = " << sum << endl;
    }
};

int main()
{
    Base base; // Only Base constructor (default provided by the compiler) is called
    B b;       // Calls A's constructor due to inheritance (compiler-generated constructor for B)
    C c;       // Calls A's constructor first, then C's constructor
    D d;       // Calls

    DefaultArg obj1(10,20);
    DefaultArg obj2(10);

    obj1.print();
    obj2.print();

    return 0;
}