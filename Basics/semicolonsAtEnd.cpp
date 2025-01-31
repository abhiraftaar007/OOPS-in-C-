#include <bits/stdc++.h>
using namespace std;

/*
Why do we give semicolons at the end of class?

Many people might say that it’s a basic syntax and we should give a semicolon at the end of the class as its rule defines in cpp.

But the main reason why semi-colons are there at the end of the class is compiler checks if the user is trying to create an instance of the class at the end of it.

Yes just like structure and union, we can also create the instance of a class at the end just before the semicolon.

As a result, once execution reaches at that line, it creates a class and allocates memory to your instance.


*/

class Person
{
    int a, b;

public:
    // Default Constructor
    Person()
    {
        cout << "Default constructor called" << endl;
    }

    // parameterized constructor
    Person(int a1, int b1) : a(a1), b(b1)
    {
        cout << "Paramterized constructor --values " << a << " " << b << endl;
    }

} instance;
// We can see that we have created a class instance of Person with the name “instance”,
// as a result, the output we can see is Default Constructor is called.

// Similarly, we can also call the parameterized constructor just by passing values here
class Person2
{
    int a, b;

public:
    // Default Constructor
    Person2()
    {
        cout << "Default constructor called" << endl;
    }

    // parameterized constructor
    Person2(int a1, int b1) : a(a1), b(b1)
    {
        cout << "Paramterized constructor --values " << a << " " << b << endl;
    }

} p1(10, 20);

// So by creating an instance just before the semicolon, we can create the Instance of class.

int main()
{

    return 0;
}