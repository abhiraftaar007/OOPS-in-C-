#include <bits/stdc++.h>
using namespace std;

/*
we can control the access to the members of the class using Access Specifiers
In C++, there are 3 access specifiers:
Public: Members declared as public can be accessed from outside the class.
Private: Members declared as private can only be accessed within the class itself.
Protected: Members declared as protected can be accessed within the class and by derived classes.

If we do not specify the access specifier, the private specifier is applied to every member by default.
*/

class Person
{
private:
    string name;

public:
    // Member Functions()
    void setName(string n)
    {
        name = n;
    }

    void printname()
    {
        cout << name << " ";
    }
};

int main()
{
    // Declare an object of class Person
    Person p;
    // accessing data member
    // cannot do it like: p.name = "Abhi"; // throw error that name is inaccessible
    p.setName("Abhi");
    // accessing member function
    p.printname();

    return 0;
}