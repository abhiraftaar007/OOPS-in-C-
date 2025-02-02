#include <bits/stdc++.h>
using namespace std;

/*
Constructors -
special method that is invoked automatically at the time an object of a class is created.

It is used to initialize the data members of new objects generally.
mostly declared in the public section of the class
same name as the class or structure.

It constructs the values i.e. provides data for the object which is why it is known as a constructor.

Constructors do not return values; hence they do not have a return type.

A constructor gets called automatically when we create the object of the class.

Constructors are mostly declared in the public section of the class though they can be declared in the private section of the class.

Types of Declarations - inside constructor, outside constructor

4 Types of Constructors -
Default - No parameters. They are used to create an object with default values.
Parameterized - Takes parameters. Used to create an object with specific initial values.
Copy - Takes a reference to another object of the same class. Used to create a copy of an object
Move - Takes an rvalue reference to another object. Transfers resources from a temporary object.

*/

class Student
{
    int rno;
    char name[50];
    double fee;

public:
    // Constructor within the class
    /* Student()
    {
        cout << "Enter the RollNo:";
        cin >> rno;
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the Fee:";
        cin >> fee;
    } */

   // Constructor outside the class
   Student();

    void display()
    {
        cout << endl << rno << "\t" << name << "\t" << fee;
    }
};

Student::Student(){
    cout << "Enter the RollNo:";
    cin >> rno;
    cout << "Enter the Name:";
    cin >> name;
    cout << "Enter the Fee:";
    cin >> fee;
}

int main()
{
    Student s;
    s.display();

    return 0;
}